# SQL 语句练习

## 一、数据库模式的定义

1. 创建数据库

   在 MySQL 中创建一个名为 mysql_test 的数据

   ```sql
      create database mysql_test;
   ```

2. 选择数据库

   ```sql
      use mysql_test.customers;
   ```

3. 修改数据库

   修改已有数据库 mysql_test 的默认字符集（改为 gb2312）和校对规则(改为 gb2312_chinese_ci)

   ```sql
      ALTER DATABASE mysql_test
      DEFAULT CHARACTER SET gb2312
      DEFAULT COLLATE gb2312_chinese_ci;
   ```

4. 删除数据库

   分别不使用和使用关键字 “IF EXISTS”删除一个系统中尚未创建的数据库 “mytest”

   ```sql
      drop database mytest;
      drop database if exists mytest;
   ```

5. 查看数据库

   使用 SHOW DATABASE 或 SHOW SCHEMA 语句来查看可用数据库列表，语法格式：SHOW {DATABASES|SCHEMA} [LIKE ‘pattern’|WHERE expr]

   ```sql
      show databases;
      show schemas like 'mysql_test';
   ```

## 二、表定义

1. 创建表

   在一个已有数据库 mysql_test 中新建一个包含客户姓名、性别、地址、联系方式等内容的客户基本信息表，要求将客户的 id 号指定为该表的主键。

   ```sql
      CREATE TABLE customers
      (
         cust_id INT NOT NULL AUTO_INCREMENT,
         cust_name CHAR(50) NOT NULL,
         cust_sex CHAR(1) NOT NULL DEFAULT 0,
         cust_address CHAR(50) NULL,
         cust_contact CHAR(50) NULL,
         PRIMARY KEY(cust_id)
      );
   ```

2. 更新表

   向数据库 mysql_test 的表 customers 中`添加一列`，命名为 cust_city，用于描述用户所在城市，要求其不能为 NULL，默认值为字符串’Wuhan’，且该列位于 cust_sex 列之后。

   ```sql
      ALTER TABLE mysql_test.customers
      ADD COLUMN cust_city CHAR(10) NOT NULL DEFAULT 'Wuhan' AFTER cust_sex;
   ```

   将数据库 mysql_test 的表 customers 的 cust_sex 列`重命名`为 sex,且将其数据`类型更改`为字符长度为 1 的字符数据类型 CHAR(1),允许其为 NULL，`默认值`为字符常量’M’ 。

   ```sql
      ALTER TABLE mysql_test.customers
      CHANGE COLUMN cust_sex sex CHAR(1) NULL DEFAULT 'M';
   ```

   将数据库 mysql_test 的表 customers 的 cust_city 列的`默认值修改`为字符常量’Beijing’

   ```sql
      ALTER TABLE mysql_test.customers
      ALTER COLUMN cust_city SET DEFAULT 'Beijing';
   ```

   将数据库 mysql_test 的表 customers 的 cust_name 列的`数据类型更改`为字符长度为 20 的定长字符数据类型 CHAR(20),并将此列设置成表的第一列

   ```sql
      ALTER TABLE mysql_test.customers
      MODIFY COLUMN cust_name CHAR(20) FIRST;
   ```

   `删除数据库` mysql_test 的表 customers 的 cust_contact 列

   ```sql
      ALTER TABLE mysql_test.customers
      DROP COLUMN cust_contact;
   ```

   重命名数据库 mysql_test 的表 customers 的表名为 back_customers

   ```sql
      ALTER TABLE mysql_test.customers
      RENAME TO mysql_test.back_customers;
   ```

   `重命名数据库` mysql_test 的表 back_customers 的表名为 customers。

   ```sql
      RENAME TABLE mysql_test.back_customers TO mysql_test.customers;
   ```

3. 删除表

   使用 DROP TABLE 语句来删除表

   ```sql
      create table test(id int not null auto_increment, primary key(id));
      drop table test;
   ```

4. 查看表

   1）显示表的名称。

   ```sql
      use mysql_test
      SHOW TABLES;
      或
      show tables from mysql_test;
   ```

   2）显示表的结构。

   ```sql
      use mysql_test
      show columns from customers;

      或
      desc mysql_test.customers;
   ```

## 三、索引定义

1. 创建索引

   在数据库 mysql_test 的表 customers 上，根据客户姓名列的前三个字符创建一个升序索引 index_customers。

   ```sql
      CREATE INDEX index_customers ON mysql_test.customers(cust_name(3) ASC);
   ```

   在数据库 mysql_test 的表 customers 上，根据客户姓名列和客户 id 号创建一个组合索引 index_cust。

   ```sql
      CREATE INDEX index_cust ON mysql_test.customers(cust_name,cust_id);
   ```

   1. 多个索引创建

      在已有数据库 mysql_test 上新建一个包含产品卖家 id 号、姓名、地址、联系方式、售卖产品类型、当月销量等内容的产品卖家信息表 seller，要求在创建表的同时，为该表添加由卖家 id 号和售卖产品类型组成的联合主键，并在当月销量上创建索引。

      ```sql
         CREATE TABLE seller
         (
            seller_id int NOT NULL AUTO_INCREMENT,
            seller_name CHAR(50) NOT NULL,
            seller_address CHAR(50) NULL,
            seller_contact CHAR(50) NULL,
            product_type int NOT NULL,
            sales int NULL,
            PRIMARY KEY(`seller_id`, `product_type`),
            INDEX index_seller(sales)
         );
      ```

   2. 使用 ALTER TABLE 语句创建索引

      在数据库 mysql_test 的表 seller 的姓名列上添加一个非唯一索引，取名为 index_seller_name。

      ```sql
         ALTER TABLE mysql_test.seller
         ADD INDEX index_seller_name(seller_name);
      ```

2. 查看索引

   ```sql
      show index from mysql_test.seller;
   ```

3. 删除索引

   使用 DROP INDEX 或 ALTER TABLE 语句来删除索引

   ```sql
      DROP INDEX index_cust ON mysql_test.customers;
   ```

   删除表 customers 的主键和索引 index_customers

   ```sql
      ALTER TABLE mysql_test.customers
      DROP PRIMARY KEY,
      DROP INDEX index_customers;
   ```

## 四、数据更新

1. 插入数据（INSERT）

   1. 使用 INSERT...VALUES 语句

   使用 INSERT … VALUES 向数据库 mysql_test 的表 customers 中插入这样一行完整数据:(901,张三,F,北京市,朝阳区，13560720231)

   ```sql
      INSERT INTO mysql_test.customers
      VALUES (2,'张三','F','北京市','朝阳区',13560720231);
   ```

   使用 INSERT … VALUES 向数据库 mysql_test 的表 customers 中插入一行数据:cust_name 和 cust_address 分别为 “李四”和“武汉市”，cust_id 由系统自动生成，cust_sex 选用默认值，cust_phone 暂不确定。

   ```sql
      INSERT INTO mysql_test.customers
      VALUES(1,'李四',DEFAULT,'武汉市',NULL);
   ```

   2. 使用 INSERT … SET

   向数据库 mysql_test 的表 customers 中插入一行数据:cust_name 和 cust_address 分别为 “李四”和“武汉市”，cust_id 由系统自动生成，cust_sex 选用默认值，cust_phone 暂不确定

   ```sql
      INSERT INTO mysql_test.customers
      SET cust_name ='李四',cust_address = '武汉市',cust_sex = DEFAULT, cust_id=4;
   ```

2. 删除数据（DELETE）

   使用 DELETE 语句删除数据库 mysql_test 的表 customers 中客户名为“王五”的客户信息。

   ```sql
      DELETE FROM mysql_test.customers WHERE cust_name = '张三';
   ```

3. 修改数据（UPDATE）

   使用 UPDATE 语句将数据库 mysql_test 的表 customers 中姓名为“张三”的客户的地址更新为“武汉市”

   ```sql
      UPDATE mysql_test.customers SET cust_address ='武汉市' WHERE cust_name = '张三';
   ```

## 五、数据查询

1. SELECT 语句语法项 select_expr

   查询数据库 mysql_test 的表 customers 中各个客户的姓名、性别和地址信息

   ```sql
      SELECT cust_name,cust_sex,cust_address
      FROM mysql_test.customers;
   ```

   查询数据库 mysql_test 的表 customers 中各个客户的所有信息。

   ```sql
      SELECT * FROM mysql_test.customers;
   ```

   `别名`: 查询数据库 mysql_test 的表 customers 中客户的 cust_name 列、cust_address 列和 cust_contact，要求将结果集中 cust_address 列的名称使用别名“地址”替代。

   ```sql
      SELECT cust_name,cust_address AS 地址,cust_city
      FROM mysql_test.customers;
   ```

2. 替换查询结果集中的数据

   查询数据库 mysql_test 的表 customers 中客户的 cust_name 列和 cust_sex 列，要求判断结果集中 cust_sex 列的值，如果该列为 M，则显示输出“男”，否则为“女”，同时在结果集的显示中将 cust_sex 列用别名“性别”标注。

   ```sql
      SELECT cust_name,
      case
      when cust_sex = "M" THEN "男"
      ELSE "女"
      END AS 性别
      FROM mysql_test.customers;
   ```

   `计算列值`

   查询数据库 mysql_test 的表 customers 中每个客户的 cust_name 列，cust_sex 列以及对 cust_id 列加上数字 100 后的值

   ```sql
      SELECT cust_name,cust_sex,cust_id+100
      FROM mysql_test.customers;
   ```

   `聚合函数`

   ```sql
      select count(*) from mysql_test.customers;
      select count(cust_sex) from mysql_test.customers;
   ```

3. From 子句与多表连接查询

   表 1

   ```sql
      CREATE TABLE Student
      (
         Sno char(9) PRIMARY KEY,
         Sname char(20) unique,
         Ssex char(2) ,
         Sage smallint,
         Sdept char(20)
      );


      INSERT INTO mysql_test.student
      VALUES ('201215121','李勇','男',20,'计算机系'),
      ('201215122','刘晨','女',19,'计算机系'),
      ('201215123','王敏','女',18,'数学系'),
      ('201215125','张立','男',19,'信息系');
   ```

   表 2

   ```sql
      CREATE TABLE Course
      (
         Cno char(4) PRIMARY KEY,
         Cname char(40) not null,
         Cpno char(4),
         Ccredit smallint,
         foreign key(Cpno) references Course(Cno)
      );

      INSERT INTO mysql_test.course VALUES
      ('2','数学',null,2),
      ('6','数据处理',null,2),
      ('7','Pascal语言','6',4),
      ('4','操作系统','6',3),
      ('5','数据结构','7',4),
      ('1','数据库','5',4),
      ('3','信息系统','1',4);
   ```

   表 3

   ```sql
      CREATE TABLE SC
      (
         Sno char(9),
         Cno char(4) ,
         Grade smallint,
         PRIMARY KEY(Sno,Cno),
         foreign key(Sno) references Student(Sno),
         foreign key(Cno) references Course(Cno)
      );

      INSERT INTO mysql_test.SC VALUES
      ('201215121','1',92),
      ('201215121','2',85),
      ('201215121','3',88),
      ('201215122','2',90),
      ('201215122','3',80);
   ```

   复制表

   ```sql
      create table student2 like student;
      insert into student2 select * from student;

      假设数据库中有两张表，分别是 tbl1 和 tbl2，现要求输出这两张表执行交叉连接后的所有数据集
      select * from student cross join student2;
   ```

   `内连接`

   根据 student 和学生选课表 SC，使用内连接查询每个学生及其选课成绩的详细信息

   ```sql
      SELECT * FROM student INNER JOIN sc
      ON student.sno=sc.sno;
   ```

   `外连接`

   左外连接

   根据 student 和选课表 sc，使用左外连接查询每个学生及其选课成绩的详细信息

   ```sql
      SELECT * FROM student LEFT JOIN sc
      ON student.sno=sc.sno;

      SELECT * FROM student RIGHT JOIN sc
      ON student.sno=sc.sno;
   ```

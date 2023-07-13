## 4.1 SQL 概述

1. SQL 概述

   - SQL 已经成为`关系数据库`的标准语言，是一种数据库查询和程序设计语言，用于存取数据以及查询、更新和管理关系数据库系统。
   - 它的功能不仅仅是查询，实际上包括`数据定义`、`数据操纵`、`数据控制`等与数据库有关的一系列功能。
   - SQL 是于 `1974` 年由 Boyce 和 Chamberlin 提出的
   - 目前没有一个数据库系统能够支持 SQL 标准的全部概念和特性

2. SQL 的特点

   - SQL 是由很少的词构成，这些词称为关键字，每个 SQL 语句都是由一个或多个关键字所组成。
   - SQL 的目的就是要能够很好地提供一种从数据库中读写数据的简单而有效的方法。
   - 注意：SQL 语句`不区分大小写`
   - SQL 具有以下特点：
     - 1）SQL 不是某个特定数据库供应商专有的语言
     - 2）SQL 简单易学
     - 3）SQL 尽管看上去简单，但它实际上是一种强有力的语言，灵活使用其语言元素，可以进行非常复杂和高级的数据库操作。

3. SQL 的组成

   - SQL 集数据查询、数据定义、数据操纵和数据控制四大功能于一体，其核心主要包括以下几个部分：
     - 1）数据定义语言（Data Definition Language, DDL）
     - 2）数据操纵语言（Data Manipulation Language，DML）
     - 3）数据控制语言（Data Control Language，DCL）
     - 4）嵌入式和动态 SQL 规则
     - 5）SQL 调用和会话规则

4. 数据定义语言

   - 数据定义语言主要用于对数据库及数据库中的各种对象进行创建、删除、修改等操作。
   - 其中数据库对象主要有表、默认约束、规则、视图、触发器、存储过程等。
   - 数据定义语言包括的主要 SQL 语句有以下三个：
     - CREATE：用于创建数据库或数据库对象
     - ALTER：用于对数据库或数据库对象进行修改
     - DROP：用于删除数据库或数据库对象
     - 对于不同的数据库对象，这三个 SQL 语句所使用的语法格式有所不同。

5. 数据操纵语言

   - 数据操纵语言主要用于操纵数据库中各种对象，特别是检索和修改数据
   - 数据操纵语言包括的主要 SQL 语句有以下四个：
     - SELECT：用于从表或视图中检索数据，其是数据库中使用最为频繁的 SQL 语句之一；
     - INSERT：用于将数据插入到表或视图中；
     - UPDATE：用于修改表或视图中的数据；
     - DELETE：用于从表或视图中删除数据。

6. 数据控制语言
   - 数据控制语言主要用于安全管理，例如确定哪些用户可以查看或修改数据库中的数据。
   - 数据控制语言包括的主要 SQL 语句有以下两个：
     - GRANT：用于授予权限，可把语句许可或对象许可的权限授予其他用户和角色；
     - REVOKE：用于收回权限，其功能于 GRANT 相反，但不影响该用户或角色从其他角色中作为成员继承许可权限。

## 4.2 MySQL 预备知识

1. MySQL

   - MySQL 是一个关系数据库管理系统（RDBMS），具有`客户/服务器`体系结构，最初由瑞典 MySQL AB 公司开发。
   - MySQL 具有体积小、速度快、开放源代码、遵循 GPL 等特点，许多中小型网站为了降低网站总体拥有成本而选择 MySQL 作为网站数据库。
   - MySQL 目前属于 Oracle，常见的关系型数据库还有 SQL Server，Oracle、MySQL，MariaDB，DB2，大数据分布式数据库 Hbase, ceph(cc++实现的开源分布式 db)
   - 非关系型数据库有：redis、leveldb、mongodb、rocksdb
   - MySQL 的服务器模型采用的是 I/O 复用+可伸缩的线程池，是实现网络服务器的经典模型，早期采用的多路复用模型是 select，现在加入了 epoll 和 kqueue 2. MySQL 的两种架构方式。

2. MySQL 的两种架构方式

   - 使用 MySQL 数据库管理系统构建各种信息管理系统或互联网网站的应用环境主要有如下两种架构方式：
     - LMAP (Linux + Apache + MySQL + PHP/Perl/Python)
     - WMAP (Windows + Apache + MySQL + PHP/Perl/Python)

3. MySQL 中的 SQL

   - MySQL 作为一种关系型数据库管理系统，遵循 SQL 标准，同样支持三级模式结构。
   - `基本表`是本身独立存在的表，在 MySQL 中一个关系对应一个基本表，一个或多个基本表对应一个存储文件，一个表可以有若干索引，索引也存放在存储文件中，其中存储文件的逻辑结构组成了 MySQL 的内模式，并且存储文件的物理结构对最终用户是隐蔽的；
   - `视图`是从一个或几个基本表导出的表，不独立存储在数据库中，即数据库中只存储视图的定义而不存储视图对应的数据，因此视图是一个`虚表`。

4. MySQL 中的 SQL 语言要素

   - MySQL 在 SQL 标准的基础上增加了部分扩展的语言要素。这些语言要素包括常量、变量、运算符、表达式、函数、流程控制语句和注解等。
   - 1）`常量`是指在程序运行过程中值不变的量，也成为字面值或标量值。常量的使用格式取决于值的数据类型，可分为字符串常量、数值常量、十六进制常量、时间日期常量、位字段值、布尔值和 NULL 值。

     - 字符串常量：用单引号或双引号括起来的字符序列，分为 ASCII 字符串常量和 Unicode 字符串常量；
     - 数值常量：分为整数常量和浮点数常量；
     - 十六进制常量：通常指定为一个字符串常量，每对十六进制数字被转换为一个字符，其最前面有一个大写字母“X”或小写字母“x”；比如 X'41'，也可以等价于 0x41
     - 日期时间常量：用单引号将表示日期时间的字符串括起来而构成；比如‘2020-06-19’
     - 位字段值：使用 b' value' 格式符号书写，其中 value 是一个 0 或 1 书写的二进制值；比如 b'01000001'
     - 布尔值：只包含两个可能的值，TRUE 和 FALSE。其中 FALSE 的数字值是 0，TRUE 的数字值是 1
     - NULL 值：表示“没有值”“无数据”等意义

   - 2）`变量`用于临时存储数据，变量中的数据可以随着程序的运行而变化。

     - 变量有名字和数据类型两个属性。名字用于标识变量，数据类型用于确定变量中存储数值的格式和可执行的运算。
     - 在 MySQL 中，变量分为用户变量和系统变量。使用时，用户变量前常加一个'@'，系统变量前加两个'@'符号。

   - 3）`运算符`,MySQL 提供了如下常用的运算符

     - [MySQL 常用运算符概述](http://c.biancheng.net/view/7575.html)

   - 4）`表达式`是常量、变量、列名、复杂计算、运算符和函数的组合。

     - 根据表达式的值的数据类型，表达式可以分为字符型表达式、数值型表达式和日期表达式。

   - 5）内置函数：在编写 MySQL 数据库程序时，通常可以直接调用系统提供的内置函数，来对数据库表进行相关操作。
     - [MySQL 常用函数](http://c.biancheng.net/mysql/function/)

- 参考链接
  - [MySQL 指南之基础知识](https://juejin.cn/post/6844903797999796231)
  - [MySQL 数据库（预备知识）](https://www.cnblogs.com/yinminbo/p/11780651.html)

## 4.3 数据定义

1. SQL 的数据定义

   - 关系数据库系统支持三级模式结构，其模式、外模式和内模式中基本对象有数据库模式、表、索引、视图等。相应地、SQL 的数据定义功能包括数据库模式定义、表定义、索引定义和视图定义。
   - [SQL 语言的数据定义](https://blog.csdn.net/ling_xiao_che/article/details/129025216)

2. 数据库模式定义

   - 数据库模式的定义包含数据库的创建、选择、修改、查看等操作。
   - 可以用 CREATE DATABASE 或 CREATE SCHEMA 语句创建数据库，语法格式如下：
     - CREATE {DATABASE|SCHEMA} [IF NOT EXISTS] db_name
     - [DEFAULT] CHARACTER SET [=] chartset_name
     - | [DEFAULT] COLLATE [=] collation_name
   - 1）在 MySQL 中创建一个名为 mysql_test 的数据
     - CREATE DATABSE mysql_test
   - 2）选择数据库
     - USE mysql_test
   - 3）修改数据库
     - 使用 ALTER DATABASE 或 ALTER SCHEMA 语句来修改已被创建数据库的相关参数
   - 4）删除数据库
      - 使用 DROP DATABASE 或 DROP SCHEME 语句来删除已经创建的数据库。使用 IF EXISTS 可以避免删除不存在的数据库时出现的 MySQL 错误信息。
   - 5）查看数据库
      - 使用 SHOW DATABASES 或 SHOW SCHEMAS 语句来查看可用数据库列表

3. 表定义

   - 只有在成功创建数据库之后，才能在数据库中创建数据表。数据表是关系数据库中最重要、最基本的数据对象，也是数据存储的基本单位。若没有表，数据库中其他的数据对象则没有意义。
   - 数据表被定义为字段的集合，数据在表中是按照行和列的格式来存储的，每一行代表一条记录，每一列代表记录中一个字段的取值。
     - 创建数据表的过程，实质上就是定义每个字段的过程，同时也是实施数据完整性约束的过程。
     - 其中，确定表中每个字段的数据类型是创建表的重要步骤，而字段的数据类型则是定义该字段所能存储的值的类型。
   - 1）创建表
      - CREATE TABLE tal_name
      - create table test (id INT NOT NULL AUTO_INCREMENT, name CHAR(50) NOT NULL, PRIMARY KEY(id));
      - create table test2 (id int not null AUTO_INCREMENT, primary key(id));
   - 2）更新表 
      - 使用 ALTER TABLE 语句来更改原有表的结构
      - ADD [COLUMN]子句。增加列。
      - CHANGE [COLUMN]  修改列的名称或数据类型
      - ALTER [COLUMN]   修改或删除表中指定列的默认值
      - MODIFY [COLUMN]  
      - DROP [COLUMN]   删除列
   - 3）重命名表
      - 除了使用前面的 ALTER TABLE 语句，还可以直接用 RENAME TABLE 语句来更改，并可同时重命名多个表。
      - rename table test to test_1
   - 4）删除表
      - 使用 DROP TABLE 语句来删除表。
      - drop table test2
   - 5）查看表。分为显示表的名称和显示表的结构两种。
      - 查看表的名称：SHOW TABLES;
      - 查看表的结构： SHOW COLUMNS FROM (mysql_test.customers | customers) 或者  DESCRIBE mysql_test.customers 或者  DESC mysql_test.customers

4. 索引定义
   - 索引是 DBMS 根据表中的一列或若干列按照一定顺序建立的列值与记录之间的对应关系表。
   - 索引实质上是一张描述索引列的列值与原表中记录行之间一一对应关系的有序表。
   - 索引是提高数据文件访问效率的有效方法。已经在各种数据库系统中得到了广泛应用。
   - 索引的分类：普通索引；唯一性索引；主键；
   - 1）索引的创建
   - 2）索引的查看
   - 3）索引的删除

## 4.4 数据更新

1. 数据更新
   - 数据更新操作有三种：向表中`添加若干行数据`、`修改`表中的数据和`删除`表中的若干行数据。在 SQL 中有三类相应的语句，分别是插入数据（INSERT）、修改数据（UPDATE）和删除数据（DELETE）。

2. 插入数据
## 4.5 数据查询

## 4.6 视图

## 思考与练习

## MySQL 的安装与配置

- [MySQL 官网](https://www.mysql.com/)
- [百科](https://zh.wikipedia.org/zh-cn/MySQL)
- [mysql-install](https://www.runoob.com/mysql/mysql-install.html)
- [Mysql 安装流程 【压缩版】](https://blog.csdn.net/qq_42780885/article/details/123076558)
- [使用管理员权限打开 cmd（Windows11）](https://cloud.tencent.com/developer/article/1908665)
- [win11 系统中 cmd 窗口 cd 进行路径切换](https://blog.csdn.net/weixin_44804514/article/details/126935426)
- [如何在系统设置 mysql 环境变量（win11）](https://blog.csdn.net/qq_28503457/article/details/119322252)

## MySQL 8.0.33 使用（windows 11）

- 以管理员身份运行 cmd
- 进入 mysql：mysql -u root -p;
- 退出命令：quit;
- 语句以`;`结束
- 常见报错
  - [MYSQL 报出 ERROR 2003 (HY000)](https://blog.csdn.net/weixin_41331140/article/details/119409805)
  - ERROR 1045 (28000): Access denied for user ‘root‘@‘localhost‘ (using password: YES)

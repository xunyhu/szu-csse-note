(window.webpackJsonp=window.webpackJsonp||[]).push([[31],{315:function(t,s,a){"use strict";a.r(s);var v=a(14),_=Object(v.a)({},(function(){var t=this,s=t._self._c;return s("ContentSlotsDistributor",{attrs:{"slot-key":t.$parent.slotKey}},[s("h2",{attrs:{id:"第一章-c-简介"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第一章-c-简介"}},[t._v("#")]),t._v(" 第一章 C++简介")]),t._v(" "),s("ol",[s("li",[t._v("在 C++程序中，用来从键盘输入值的标准输入流对象是"),s("code",[t._v("cin")]),t._v(";")]),t._v(" "),s("li",[t._v("指示编译器将一个源文件嵌入到带该指令的源文件中的指令是"),s("code",[t._v("#include")]),t._v(";")]),t._v(" "),s("li",[t._v("函数指针的默认值不允许是"),s("code",[t._v("局部变量")]),t._v(";")]),t._v(" "),s("li",[t._v("将指向对象的指针作为函数参数，形参是对象指针，则实参是对象的"),s("code",[t._v("地址值")]),t._v(";")]),t._v(" "),s("li",[t._v("定义整形变量 oneInt 的引用 bname 的语句是"),s("code",[t._v("int &bname = oneInt")]),t._v(";")]),t._v(" "),s("li",[t._v("在 C++语言中，如果调用函数时需要改变实参或者返回多个值，传参数时应该采取"),s("code",[t._v("传引用或地址")]),t._v("方式")]),t._v(" "),s("li",[t._v("用来声明内联函数的关键字是"),s("code",[t._v("inline")])]),t._v(" "),s("li",[t._v("动态申请含 20 个元素的整型数组 A 的语句是"),s("code",[t._v("int * A = new int[20]")]),t._v(";")]),t._v(" "),s("li",[t._v("使用重载函数编写程序的目的是"),s("code",[t._v("使用相同的函数名调用功能相似的函数")]),t._v(";")]),t._v(" "),s("li",[t._v("使用 new 运算符动态分配的内存，释放时使用的运算符是"),s("code",[t._v("delete")]),t._v("；")]),t._v(" "),s("li",[t._v("设在程序中定义了类 Point，并使用语句 Point *ptr = new Point[2],申请了一个 Point 对象数组，则释放 ptr 指向的动态数组对象的语句是："),s("code",[t._v("delete []ptr")]),t._v(";")]),t._v(" "),s("li",[t._v("求 string 对象 s1 从下标 2 开始，一直到串尾的子串，并赋值给 string 变量 s5 的语句是:"),s("code",[t._v("string s5 = s1.substr(2, s1.length())")]),t._v(";")])]),t._v(" "),s("h2",{attrs:{id:"第二章-面向对象"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第二章-面向对象"}},[t._v("#")]),t._v(" 第二章 面向对象")]),t._v(" "),s("ol",[s("li",[t._v("一个项目中只能有一个函数是"),s("code",[t._v("main函数")]),t._v(";")]),t._v(" "),s("li",[t._v("类中成员按访问权限，包括："),s("code",[t._v("private, protected, public")]),t._v(";")]),t._v(" "),s("li",[t._v("对象传递的消息一般由 3 部分组成："),s("code",[t._v("接收对象名")]),t._v("、"),s("code",[t._v("调用操作名")]),t._v("和"),s("code",[t._v("形参")]),t._v(";")]),t._v(" "),s("li",[t._v("已知有如下的类定义："),s("div",{staticClass:"language-cpp extra-class"},[s("pre",{pre:!0,attrs:{class:"language-cpp"}},[s("code",[s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("class")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token class-name"}},[t._v("A")]),t._v("\n"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n"),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("public")]),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v(":")]),t._v("\n    "),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" m"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v("*")]),t._v("p "),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v("=")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v("&")]),t._v("m"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n")])])]),t._v("A1 是类 A 的对象。如果要通过指针 p 给变量 m 赋值 10，相应的语句是："),s("code",[t._v("*A1.p = 10")]),t._v(";")]),t._v(" "),s("li",[t._v("类 C 中不可以定义类 C 的"),s("code",[t._v("成员变量")]),t._v(";")]),t._v(" "),s("li",[t._v("类 C 中可以定义类 C 的"),s("code",[t._v("指针或引用")]),t._v(";")]),t._v(" "),s("li",[t._v("已知有如下的类定义："),s("div",{staticClass:"language-cpp extra-class"},[s("pre",{pre:!0,attrs:{class:"language-cpp"}},[s("code",[s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("class")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token class-name"}},[t._v("X")]),t._v("\n"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n    "),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" a"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("void")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token function"}},[t._v("fun1")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n"),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("public")]),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v(":")]),t._v("\n    "),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("void")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token function"}},[t._v("fun2")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n")])])]),t._v("则在类外使用对象 objX 能够访问的成员是"),s("code",[t._v("fun2()")])])]),t._v(" "),s("h2",{attrs:{id:"第三章-类和对象进阶"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第三章-类和对象进阶"}},[t._v("#")]),t._v(" 第三章 类和对象进阶")]),t._v(" "),s("ol",[s("li",[t._v("定义类时，如果一个构造函数没有编写，则编译器自动生成默认（无参）构造函数和"),s("code",[t._v("赋值构造函数")]),t._v(";")]),t._v(" "),s("li",[t._v("复制构造函数的形参个数是"),s("code",[t._v("一个")]),t._v(";")]),t._v(" "),s("li",[t._v("复制构造函数的形参是"),s("code",[t._v("本类对象的引用")]),t._v(";")]),t._v(" "),s("li",[t._v("说明一个类的对象时，系统自动调用"),s("code",[t._v("构造函数")]),t._v(";")]),t._v(" "),s("li",[t._v("程序中撤销一个类对象时，系统自动调用"),s("code",[t._v("析构函数")]),t._v(";")]),t._v(" "),s("li",[t._v("类 Point 的析构函数的定义原型是"),s("code",[t._v("~Point();")]),t._v(";")]),t._v(" "),s("li",[t._v("对象成员构造函数的调用顺序取决于在这些对象在类中说明的顺序，与它们在成员初始化列表中给出的顺序"),s("code",[t._v("无关")]),t._v(";")]),t._v(" "),s("li",[t._v("类的普通成员函数是指声明中不含"),s("code",[t._v("const")]),t._v("和"),s("code",[t._v("static")]),t._v("关键字的函数；")]),t._v(" "),s("li",[t._v("若类 X 的对象 x 是类 Y 的成员对象，则执行“Y obj;”语句时，先调用类"),s("code",[t._v("X")]),t._v("的构造函数；")]),t._v(" "),s("li",[t._v("调用封闭类的构造函数之前，必须调用"),s("code",[t._v("成员对象的构造函数")]),t._v(";")]),t._v(" "),s("li",[t._v("若把类 B 的成员函数 void fun()说明为类 A 的友元函数，则应在类 A 中加入语句"),s("code",[t._v("friend void B::fun();")]),t._v(";")]),t._v(" "),s("li",[t._v("不是类中的成员函数，但却能在函数体中访问类中私有成员变量的函数是类的"),s("code",[t._v("友元函数")]),t._v(";")]),t._v(" "),s("li",[t._v("this 指针始终指向调用成员函数的"),s("code",[t._v("对象")]),t._v(";")])]),t._v(" "),s("h2",{attrs:{id:"第四章-运算符重载"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第四章-运算符重载"}},[t._v("#")]),t._v(" 第四章 运算符重载")]),t._v(" "),s("ol",[s("li",[t._v("在 C++程序中，重载运算符[]时，不能用友元运算符来重载，只能用"),s("code",[t._v("成员函数")]),t._v("来重载;")]),t._v(" "),s("li",[t._v("设 op 表示要重载的运算符，那么重载运算符的函数名是"),s("code",[t._v("operator op")]),t._v(";")]),t._v(" "),s("li",[t._v("类型转换只能定义一个类的"),s("code",[t._v("成员函数")]),t._v(";")]),t._v(" "),s("li",[t._v("当一元运算符的操作数，或者二元运算符的左操作数是该类的一个对象时，重载运算符一般定义为:"),s("code",[t._v("成员函数")])]),t._v(" "),s("li",[t._v("一元运算符作为类成员函数时，形参的个数是："),s("code",[t._v("0")])])]),t._v(" "),s("h2",{attrs:{id:"第五章-类的继承与派生"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第五章-类的继承与派生"}},[t._v("#")]),t._v(" 第五章 类的继承与派生")]),t._v(" "),s("ol",[s("li",[t._v("类的继承是指派生类继承基类的"),s("code",[t._v("成员变量")]),t._v("和"),s("code",[t._v("成员函数")]),t._v(";")]),t._v(" "),s("li",[t._v("在保护派生中，基类权限为 private 的成员在派生类中"),s("code",[t._v("不可访问")]),t._v(";")]),t._v(" "),s("li",[t._v("从一个或多个以前定义的类产生新类的过程成为"),s("code",[t._v("派生")]),t._v(";")]),t._v(" "),s("li",[t._v("基类的公有成员在派生类中的访问权限由"),s("code",[t._v("继承方式")]),t._v("决定;")]),t._v(" "),s("li",[t._v("基类中不能被派生类继承的成员函数是"),s("code",[t._v("析构函数和构造函数")]),t._v(";")]),t._v(" "),s("li",[t._v("C++中有两种继承：一种是单继承；另一种是"),s("code",[t._v("多重继承")]),t._v(";")]),t._v(" "),s("li",[t._v("派生类的成员一般分为两种：一部分是由自己定义的新成员；另外一部分是"),s("code",[t._v("从基类继承的成员")]),t._v(";")]),t._v(" "),s("li",[t._v("当派生类指针指向基类对象时，为了能调用派生类的成员函数，必须进行"),s("code",[t._v("强制类型转换")]),t._v(";")]),t._v(" "),s("li",[t._v("让派生类指针 pDerived 指向基类对象 objBase 的语句是："),s("code",[t._v("pDerived = (CDerived*)&objBase")]),t._v(";")]),t._v(" "),s("li",[t._v("调用派生类构造函数之前，必须调用"),s("code",[t._v("基类构造函数")]),t._v(";")])]),t._v(" "),s("h2",{attrs:{id:"第六章-多态与虚函数"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第六章-多态与虚函数"}},[t._v("#")]),t._v(" 第六章 多态与虚函数")]),t._v(" "),s("ol",[s("li",[t._v("定义虚函数时使用的关键字是"),s("code",[t._v("virtual")]),t._v(";")]),t._v(" "),s("li",[t._v("通过基类指针调用虚函数，可能会出现完全不同的行为的现象称为"),s("code",[t._v("动态多态")]),t._v("；")]),t._v(" "),s("li",[t._v("静态联编所支持的多态性称为"),s("code",[t._v("编译时")]),t._v("的多态性;")]),t._v(" "),s("li",[t._v("编译时的多态性通过"),s("code",[t._v("重载")]),t._v("实现;")]),t._v(" "),s("li",[t._v("抽象类中至少要有一个"),s("code",[t._v("纯虚函数")]),t._v(";")]),t._v(" "),s("li",[t._v("有虚函数的类，其析构函数也应该实现为"),s("code",[t._v("虚函数")]),t._v(";")]),t._v(" "),s("li",[t._v("通过基类指针或引用调用成员函数的语句，只有当该成员函数是"),s("code",[t._v("虚函数")]),t._v("时才是多态的；")]),t._v(" "),s("li",[t._v("如果通过基类指针或引用调用不是虚函数的成员函数，那么这条函数调用语句就是"),s("code",[t._v("静态")]),t._v("联编的；")])]),t._v(" "),s("h2",{attrs:{id:"第七章-输入输出流"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第七章-输入输出流"}},[t._v("#")]),t._v(" 第七章 输入输出流")]),t._v(" "),s("ol",[s("li",[t._v("C++中 ostream 类的直接基类是"),s("code",[t._v("ios")]),t._v(";")]),t._v(" "),s("li",[t._v("表达式"),s("code",[t._v("cout<<hex")]),t._v("还可以表示为"),s("code",[t._v("cout<<setiosflages(ios_base::hex)")]),t._v(";")]),t._v(" "),s("li",[t._v('要将 str="Hello!"输出为"*_**Hello!"这样的格式，应该使用的语句是:'),s("code",[t._v('cout<<setfill(_)<<setw(10)<<"Hello!"')]),t._v(";")]),t._v(" "),s("li",[t._v("下列程序段输出的结果是："),s("code",[t._v("123.45****")]),s("div",{staticClass:"language-cpp extra-class"},[s("pre",{pre:!0,attrs:{class:"language-cpp"}},[s("code",[t._v("cout"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),s("span",{pre:!0,attrs:{class:"token function"}},[t._v("fill")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),s("span",{pre:!0,attrs:{class:"token char"}},[t._v("'*'")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\ncout"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),s("span",{pre:!0,attrs:{class:"token function"}},[t._v("width")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),s("span",{pre:!0,attrs:{class:"token number"}},[t._v("10")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\ncout"),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<<")]),s("span",{pre:!0,attrs:{class:"token function"}},[t._v("setiosflags")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("ios"),s("span",{pre:!0,attrs:{class:"token double-colon punctuation"}},[t._v("::")]),t._v("left"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<<")]),s("span",{pre:!0,attrs:{class:"token number"}},[t._v("123.45")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n")])])])])]),t._v(" "),s("h2",{attrs:{id:"第八章-文件操作"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第八章-文件操作"}},[t._v("#")]),t._v(" 第八章 文件操作")]),t._v(" "),s("ol",[s("li",[t._v("I/O 操作分别由两个类："),s("code",[t._v("ostream")]),t._v("和"),s("code",[t._v("istream")]),t._v("提供，由他们派生一个类"),s("code",[t._v("iostream")]),t._v("，提供双向的 I/O 操作，使用 I/O 流的程序要包含头文件"),s("code",[t._v("Iostream")]),t._v(";")]),t._v(" "),s("li",[t._v("cin 是"),s("code",[t._v("istream")]),t._v("的一个对象，处理标准输出；cout、cerr 和 clog 是"),s("code",[t._v("ostream")]),t._v("的对象，cout 处理标准输出，cerr 和 clog 都能处理标准出错信息，知识"),s("code",[t._v("cerr")]),t._v("不带缓冲，"),s("code",[t._v("clog")]),t._v("输出带缓冲。")]),t._v(" "),s("li",[t._v("文件的 I/O 由"),s("code",[t._v("ifstream")]),t._v("、"),s("code",[t._v("ofstream")]),t._v("、"),s("code",[t._v("fstream")]),t._v("3 个类提供，使用文件类的程序要包含头文件"),s("code",[t._v("fstream")]),t._v("。")]),t._v(" "),s("li",[t._v("头文件"),s("code",[t._v("fstream.h")]),t._v("中包含了处理用户控制的文件操作所需要的信息。")]),t._v(" "),s("li",[t._v("现有两条语句:"),s("div",{staticClass:"language-cpp extra-class"},[s("pre",{pre:!0,attrs:{class:"language-cpp"}},[s("code",[t._v("ifstream datafile"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\ndatafile"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),s("span",{pre:!0,attrs:{class:"token function"}},[t._v("open")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),s("span",{pre:!0,attrs:{class:"token string"}},[t._v('"Text.txt"')]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n")])])]),t._v("它们的等效语句是："),s("code",[t._v('fstream datafile.open("Text.txt", ios_base::in)')])])]),t._v(" "),s("h2",{attrs:{id:"第九章-函数模板与类模板"}},[s("a",{staticClass:"header-anchor",attrs:{href:"#第九章-函数模板与类模板"}},[t._v("#")]),t._v(" 第九章 函数模板与类模板")]),t._v(" "),s("ol",[s("li",[t._v("设有类模板 TestClass，类型参数是 T，在类体外定义其成员函数 getData()时的格式是"),s("div",{staticClass:"language-cpp extra-class"},[s("pre",{pre:!0,attrs:{class:"language-cpp"}},[s("code",[s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("template")]),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("class")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token class-name"}},[t._v("T")]),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">")]),t._v("\nT "),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("template")]),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),s("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("class")]),t._v(" "),s("span",{pre:!0,attrs:{class:"token class-name"}},[t._v("T")]),s("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">")]),s("span",{pre:!0,attrs:{class:"token double-colon punctuation"}},[t._v("::")]),s("span",{pre:!0,attrs:{class:"token function"}},[t._v("getData")]),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("形参表"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),t._v("\n"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n    函数体\n"),s("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n")])])])])])])}),[],!1,null,null,null);s.default=_.exports}}]);
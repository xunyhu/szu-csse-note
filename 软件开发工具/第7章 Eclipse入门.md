## 7.1 Eclipse 简介

1. Eclipse 简介
   - Eclipse 是一个`开放源代码`的、基于 `Java` 的`可扩展集成应用程序`开发环境。
   - 就其本身而言，它只是一个`框架`和一组`服务`，通过`插件`组件构建开发环境。
   - Eclipse 最初主要用来进行` Java 语言`开发。Eclipse 作为一个框架平台还包括插件开发环境（PDE）,允许构建与 Eclipse 环境无缝集成的工具。
   - 尽管 Eclipse 是使用 Java 语言开发的，但它`并不限于 Java 语言开发`。例如 Eclipse 支持诸如 `C/C++、C#、PHP、J2EE、JavaScript `等编程语言的插件，如 CDT（C/C++ Development Tools）
   - Eclipse 的体系结构主要包括：
     - 1）`运行时内核`：平台运行库是内核，启动时检查已经安装了哪些插件，并创建了关于它们的注册表信息。`为了降低启动时间和资源使用，平台运行库在实际需要插件时才加载。`除了内核外，其他每样东西都是作为插件来实现的。
     - 2）`工作空间`：负责管理`用户资源`的插件，包括用户创建的`项目`、项目中的`文件`、以及文件变更和其他资源。
     - 3）`工作台`：为 Eclipse 提供`用户界面`。使用标准窗口工具包（SWT）和一个更高级的 API(JFace)开构建的
     - 4）`其他插件`。其他插件包括`帮助组件`、`团队支持组件`等

## 7.2 Eclipse 的获取与安装方法

1. JDK 的获取与安装方法

   - 使用 Eclipse，`首先需要安装 JDK（Java SE Development Kit）`。JDK 可以在 SUN 公司（现已被 ORACLE 收购）的网站下载。
   - [oracle-JDK](https://www.oracle.com/cn/java/technologies/downloads/)
   - 安装完 JDK 之后，开始安装专门用于编写 C 和 C++开发环境`CDT（C/C++ Development Tools）`。本书使用的是 3.5.0 版本。

2. Eclipse CDT 的获取与安装方法

   - 安装完 JDK 之后，开始安装专门用于编写 C 和 C++开发环境 CDT。

3. Eclipse 安装后
   - [eclipse-install](https://www.runoob.com/eclipse/eclipse-install.html)
   - 在安装目录中，可以看到有六个文件夹和若干文件，其中`configuration文件夹`中包含了 Eclipse 工作台相关的配置信息，`features和plugins文件夹`中包含了该 Eclipse 版本中安装的所有功能和组件，`p2文件夹中`是 Eclipse 运行的核心部分，readme 文件夹则包含了介绍 Eclipse 的内容。

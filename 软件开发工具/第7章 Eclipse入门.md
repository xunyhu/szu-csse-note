## 7.1 Eclipse 简介

1. Eclipse 简介
   - Eclipse 是一个开放源代码的、基于 Java 的可扩展集成应用程序开发环境。
   - 就其本身而言，它只是一个框架和一组服务，通过插件组件构建开发环境。
   - Eclipse 最初主要用来进行 Java 语言开发。Eclipse 作为一个框架平台还包括插件开发环境（PDE）,允许构建与 Eclipse 环境无缝集成的工具。
   - 尽管 Eclipse 是使用 Java 语言开发的，但它并不限于 Java 语言开发。例如 Eclipse 支持诸如 C/C++、C#、PHP、J2EE、JavaScript 等编程语言的插件，如 CDT（C/C++ Development Tools）
   - Eclipse 的体系结构主要包括：
     - 1）运行时内核：平台运行库是内核，启动时检查已经安装了哪些插件，并创建了关于它们的注册表信息。为了降低启动时间和资源使用，平台运行库在实际需要插件时才加载。除了内核外，其他每样东西都是作为插件来实现的。
     - 2）工作空间：负责管理用户资源的插件，包括用户创建的项目、项目中的文件、以及文件变更和其他资源。
     - 3）工作台：为 Eclipse 提供用户界面。使用标准窗口工具包（SWT）和一个更高级的 API(JFace)开构建的
     - 4）其他插件。其他插件包括帮助组件、团队支持组件等

## 7.2 Eclipse 的获取与安装方法

1. JDK 的获取与安装方法

   - 使用 Eclipse，首先需要安装 JDK（Java SE Development Kit）。JDK 可以在 SUN 公司（现已被 ORACLE 收购）的网站下载。
   - [oracle-JDK](https://www.oracle.com/cn/java/technologies/downloads/)

2. Eclipse CDT 的获取与安装方法

   - 安装完 JDK 之后，开始安装专门用于编写 C 和 C++开发环境 CDT。

3. Eclipse 安装后
   - [eclipse-install](https://www.runoob.com/eclipse/eclipse-install.html)

## 练习题

1. Eclipse 最初是用来开发`Java`语言的
2. Java 的 Swing/AWT GUI API 的替代者是` `。
3. 简述 Eclipse 的框架结构
4. 简述 Eclipse 的安装方法

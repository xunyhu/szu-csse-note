export default {
  title: '数据结构知识库',
  description: '深圳大学计算机与软件学院学习笔记',

  themeConfig: {
    logo: '',

    nav: [
      { text: '首页', link: '/' },
      { text: '数据结构', link: '/data-structure/chapter1' }
    ],

    sidebar: {
      '/data-structure/': [
        {
          text: '第一章 概论',
          items: [
            { text: '基本概念', link: '/data-structure/chapter1' }
          ]
        },
        {
          text: '第二章 线性表',
          items: [
            { text: '线性表', link: '/data-structure/chapter2' }
          ]
        },
        {
          text: '第三章 栈队列数组',
          items: [
            { text: '栈队列数组', link: '/data-structure/chapter3' }
          ]
        },
        {
          text: '第四章 树',
          items: [
            { text: '树与二叉树', link: '/data-structure/chapter4' }
          ]
        },
        {
          text: '第五章 图',
          items: [
            { text: '图', link: '/data-structure/chapter5' }
          ]
        },
        {
          text: '第六章 查找',
          items: [
            { text: '查找', link: '/data-structure/chapter6' }
          ]
        },
        {
          text: '第七章 排序',
          items: [
            { text: '排序', link: '/data-structure/chapter7' }
          ]
        }
      ]
    }
  }
}
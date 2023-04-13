#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//P308

// 实现一个程序，从键盘输入学生的学号、姓名和成绩，将它们存入文件score.txt中。假设学号不超过10个字节，姓名不超过20个字节
int main()
{
    char id[11], name[21];
    int score;
    string filePath = "d:\\score.txt";
    // ofstream outFile;
    // outFile.open(filePath, ios::out);
    // if (!outFile)
    // {
    //     cout << "创建文件失败" << endl;
    //     return 0;
    // }
    // cout << "请输入：学号  姓名  成绩 (以Ctrl+Z+回车结束输入)\n";
    // while (cin >> id >> name >> score)
    //     outFile << id << "" << name << "" << score << endl;
    // outFile.close();

    ifstream showFile;
    showFile.open(filePath, ios::in);
    if (!showFile)
    {
        cout << "打开文件失败" << endl;
        return 0;
    }
    cout << "学生学号 姓名\t\t\t成绩\n";
    while (showFile>>id>>name>>score)
        cout<<left<<setw(10)<<id<<" "<<setw(20)<<name<<" "<<setw(3)<<right<<score<<endl;
    showFile.close();
    
    return 0;
}
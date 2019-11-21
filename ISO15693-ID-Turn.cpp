#include <stdio.h>//C++实现射频卡片ISO15693的ID转换
using namespace std;
char s[100], ans[7][3], b[7][3];
int main()
{
    //freopen("in.txt", "r", stdin);//重定向文件读入
    //freopen("out.txt", "w", stdout);//重定向文件输出
    scanf("%s", s);
    for (int i = 10, j = 0; j < 8; ++j, i += 2) {
        b[j][0] = s[i];
        b[j][1] = s[i + 1];
    }
    for (int i = 0; i < 8; ++i) {
        ans[i][0] = b[7 - i][0];
        ans[i][1] = b[7 - i][1];
    }
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 2; ++j)
            printf("%c", ans[i][j]);
    return 0;
}
//数字黑洞6174
//给一个4位数，将各位数字排列组合，形成一个最大数和一个最小数，之后两数相减，得到一个自然数，然后，对这个自然数重复上述运算，一直重复到发现这个神秘的数，输出这个神秘数，和所需次数。初始四个数如果完全相同，则没有结果
//eg.   输入：2314   输出6174；    输入8888    输出：无
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Big(int x) {
    vector <int> array(4);
    array[0] = x / 1000;
    array[1] = x % 1000 / 100;
    array[2] = x % 100 / 10;
    array[3] = x % 10;
    sort(array.begin(), array.begin()+4);
    int sum = array[3] * 1000 + array[2] * 100 + array[1] * 10 +array[0];
    return sum;
}

int Small(int x) {
    vector <int> array(4);
    array[0] = x / 1000;
    array[1] = x % 1000 / 100;
    array[2] = x % 100 / 10;
    array[3] = x % 10;
    sort(array.begin(), array.begin()+4);
    int sum = array[0] * 1000 + array[1] * 100 + array[2] * 10 +array[3];
    return sum;
}

int main() {
    int a;
    int count = 0;
    cout << "Please input the number:";
    cin >> a;
    int x = Big(a) - Small(a);
    
    if (x == 0)
        cout <<"No secret number : ";
    else {
        int n;
        do {
                n = Big(a) - Small(a);
                a = n;
                count++;
        } while(n != 6174);
    }
    cout << "Secret number : 6174" << endl;
    cout << "Count:" << count;
     return 0;
}
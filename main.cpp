//
//  main.cpp
//  输出出现一次的第一个数
//
//  Created by 董依萌 on 2017/4/14.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string c1,c2;
    int i,n,m=0;
    int x,y=0;
    cin>>c1;
    cin>>n;
    if(n<0||n>9)
        return 0;
    for(i=0;c1[i]!=0;i++){
        x=c1[i]-'0';
        x=y*10+x;
        y=x%n;
        c2[m++]=x/n+'0';
    }
    if(m-1==0){
        cout<<c2[0];
        cout<<" "<<y<<endl;
        return 0;
    }
    if(c2[0]=='0')
        cout<<c2[1];
    else
        cout<<c2[0]<<c2[1];
    for(i=2;c2[i]!=0;i++)
        cout<<c2[i];
    cout<<" "<<y<<endl;
    return 0;
}

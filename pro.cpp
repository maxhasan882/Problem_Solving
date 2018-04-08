#include<bits/stdc++.h>
using namespace std;
int main()
{
    double height,weight,BMI;
    cin>>height>>weight;
    height*=0.025;
    BMI = weight/(height*height);
    if(BMI<19)
    {
        printf("MR. Chikupiku!\n");
    }
    else if(BMI>23)
    {
        cout<<"MR. Motashota! Ar koto khabi!"<<endl;
    }
    else cout<<"MR. Sushasthoban! Valoi asen taile!"<<endl;
    return 0;
}

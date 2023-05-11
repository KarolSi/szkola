#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;


int w = 0;
int brz = 0;
int main()
{
    ifstream plik;
    plik.open("punkty.txt");
    int x[10000]; 
    int y[10000];
    for (int i = 0; i < 10000; i++)
    {
        plik >> x[i] >> y[i];
    }
    /*
    for (int i = 0; i < 10000; i++)
    {
        cout<<x[i]<<" "<<y[i]<<"\n";
    }*/
    
    for (int i = 0; i < 10000; i++)
    {
        int kwa1 = (x[i]-200)*(x[i]-200);
        int kwa2 = (y[i]-200)*(y[i]-200);
        if(kwa1+kwa2 == 200*200) w++;
        if(kwa1+kwa2 <  200*200) brz++;

        
    }
    //cout<<w<<" "<<brz;
    int k = 0;
    for (int i = 0; i < 1000; i++)
    {
        int kwa1 = (x[i]-200)*(x[i]-200);
        int kwa2 = (y[i]-200)*(y[i]-200);
        if(kwa1+kwa2 < 200*200) k++;
        if(kwa1+kwa2 == 200*200) k++;
    }
    double f = 4.0*k/1000.0;
    cout<<fixed<<setprecision(4)<<f<<"\n";
    for (int i = 1000; i < 5000; i++)
    {
       int kwa1 = (x[i]-200)*(x[i]-200);
        int kwa2 = (y[i]-200)*(y[i]-200);
        if(kwa1+kwa2 < 200*200) k++; 
        if(kwa1+kwa2 == 200*200) k++;
    }
    f = 4.0*k/5000.0;
    cout<<fixed<<setprecision(4)<<f<<"\n";
    for (int i = 5000; i < 10000; i++)
    {
        int kwa1 = (x[i]-200)*(x[i]-200);
        int kwa2 = (y[i]-200)*(y[i]-200);
        if(kwa1+kwa2 < 200*200) k++;
        if(kwa1+kwa2 == 200*200) k++;
    }
    f = 4.0*k/10000.0;
    cout<<fixed<<setprecision(4)<<f<<"\n";
}
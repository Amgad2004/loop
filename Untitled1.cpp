#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include<map>
using namespace std;

int main() {
	map<string,int>mp;
	string s;
	ifstream myfile;
	myfile.open("D:/Flutter & Dart Complete Development Course [2023] [Arabic]/3. Object oriented programming/flutter");
	if(myfile.is_open())
	{
		while(myfile>>s)mp[s]++;
	}
	for(auto ite : mp)cout<<ite.first<<" "<<ite.second<<endl;
	}


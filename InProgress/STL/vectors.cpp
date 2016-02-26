
#include<iostream>
#include<vector>
using namespace std;

int main()
{
// initializing vector
	vector<int> v;
	vector<int>::iterator iter;
//	cout<<"before: "<<v.empty()<<endl;

	v.push_back(1);
	v.push_back(2.1);
	v.push_back(3.3);

//	cout<<"after: "<<v.empty()<<endl;
//	cout << v.size() << endl;
// old way
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<" ";
//	}

// new way
    for(iter=v.begin();iter!=v.end();iter++){
        cout<< *iter<<" ";
    }


    v.erase(v.begin(),v.begin()+1);
//    cout<<v.empty();
    for(iter=v.begin();iter!=v.end();iter++){
        cout<< *iter<<" ";
    }


//	cout<<endl;
//	v.clear();
//	cout<<"after: "<<v.empty();
}

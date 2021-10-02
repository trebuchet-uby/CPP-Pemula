	#include<iostream>
	#include<vector>
	#include<algorithm>
	using namespace std;

	int main()
	{
		vector<double> v;

		double d;
		while(cin>>d) v.push_back(d);	// read elements
		if (!cin.eof()) {		// check if input failed
			cerr << "format error\n";
			return 1;	// error return
		}

		cout << "read " << v.size() << " elements\n";

		reverse(v.begin(),v.end());
		cout << "elements in reverse order:\n";
		for (int i = 0; i<v.size(); ++i) cout << v[i] << '\n';

		return 0; // success return
	}

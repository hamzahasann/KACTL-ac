int main(){
	vector<int>key;
	auto cmp=[key](int a,int b){return key[a]<key[b];};
	vector<int>a;
	sort(all(a),cmp);
	set<int,decltype(cmp)>s(cmp);
	priority_queue<int,vector<int>,decltype(cmp)>pq(cmp);
}
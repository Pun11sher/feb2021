//#include<iostream>
//using namespace std;
//
//int b;
//
//int hp2(int n) {
//    for (int i = n; i >= 1; i--) {
//    }
//}
//
//int main()
//{
//    int t ;
//    cin >>t;
//    while(t--)
//    {
//
//        int count = 0 ;
//        int n ;
//        cin>> n;
//        while(n>=1)
//        {
//            hp2(n);
//            if(b==n)
//            {
//                n/=2;
//                count ++;
//            }
//            else
//            {
//                n = n- b ;
//                count ++;
//            }
//        }
//
//        if ( count %2 == 0)
//        {
//            cout <<"Richard";
//        }
//        else
//        {
//            cout <<"Louise";
//        }
//    }
//}


//#include <iostream>
//using namespace std;
//
//int lcs(string a,string b,int x,int y){
//    if(x==0 || y==0){
//        return 0;
//    }
//    if(a[x]==b[y]){
//        return 1+lcs(a,b,x-1,y-1);
//    }
//    return max(lcs(a,b,x-1,y),lcs(a,b,x,y-1));
//}
//int main(){
//    string a,b;
//    cin>>a>>b;
//    int x,y;
//    x=a.size();
//    y=b.size();
//    cout<<lcs(a,b,x,y);
//}

//#include<iostream>
//#include "vector"
//using namespace std;
//
//int main()
//{
//    vector<vector<int>>v;
//    vector<int>(v1);
//    int A;
//    cin>>A;
//    v1.push_back(1);
//    v.push_back(v1);
//    for(int j =1; j<A; j++)
//    {
//
//        for(int i = 0; i<=j; i++)
//        {
//            if(i==0)
//            {
//                v1.push_back(1);
//            }
//            else if(i=j)
//            {
//                v1.push_back(1);
//            }
//            else
//            {
//                int t = v[j-1][i]+v[j-1][i-1];
//                v1.push_back(t);
//            }
//        }
//        v.push_back(v1);
//    }
//    for (int i = 0; i < v.size(); i++) {
//        for (int j = 0; j < v[i].size(); j++)®
//            cout << v[i][j] << " ";
//        cout << endl;
//    }
//
//}

//#include "iostream"
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int k;
//    k=1+(n-1)*2;
//    int m[k][k];
//    for(int i=0;i<k;i++){
//        for(int j=0;j<k;j++){
//            m[i][j]=n;
//        }
//    }
//}

// CHECK THE SOLUTION
//#include<iostream>
//#include "vector"
//using namespace std;
//int main() {
//    vector<vector<int>>v;
//    vector<int>v1;
//    int n;
//    cin >> n;
//    int k = 2 * n - 1;
//    int  f = -1, b = k;
//    int s=(k+1)/2,x=1;
//    for (int i = 0; i < k; i++) {
//        f += 1;
//        b -= 1;
//        if(i>=s) {
//            x++;
//        }
//        for (int j = 0; j < k; j++) {
//            if (i == 0) {
//                v1.push_back(n);
//            } else if (i >= s) {
//                v1.push_back(v[s - x][j]);
//            } else {
//                v1.push_back(v[i - 1][j]);
//                if (j >= f && j <= b) {
//                    v1[j] = (v[i - 1][j] - 1);
//                }
//            }
//        }
//        v.push_back(v1);
//        v1.clear();
//    }
//}

//#include "iostream"
//#include "string"
//#include "vector"
//using namespace std;
//bool com(string x,string y){
//    if(x+y>y+x){
//        return true;
//    }
//    return false;
//}
//int main(){
//    int n;
//    cin>>n;
//    vector<string> v;
//    int x;
//    for(int i=0;i<n;i++){
//        cin>>x;
//        v.push_back(to_string(x));
//    }
//    sort(v.begin(),v.end(),com);
//    string z;
//    int flag=0;
//    for (int i = 0; i < n; i++) {
//       z+=v[i];
//    }
//    cout<<z<<"\n";
//}


//#include "iostream"
//#include "vector"
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    vector<vector<int>> a(n, vector<int>(n, 0));
//    int l = 0, r = n - 1, t = 0, b = n - 1;
//    int v = 1;
//    while (l <= r || t <= b) {
//        for (int i = l; i <= r; i++) {
//            a[t][i] = v++;
//        }
//        t++;
//        for (int i = t; i <= b; i++) {
//            a[i][r] = v++;
//        }
//        r--;
//        for (int i = r; i >= l; i--) {
//            a[b][i] = v++;
//        }
//        b--;
//        for (int i = b; i >= t; i--) {
//            a[i][l] = v++;
//        }
//        l++;
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//}



//#include "iostream"
//using namespace std;
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int cv[m+1][n+1];
//    for(int i=1;i<=m;i++){
//        for(int j=1;j<=n;j++){
//            if(i==1 || j==1){
//                cv[i][j]=1;
//            }
//        }
//    }
//    int sum=1;
//    for(int i=2;i<=m;i++){
//        for(int j=2;j<=n;j++){
//            cv[i][j]=cv[i][j-1]+cv[i-1][j];
//            if(i==m-1){
//               sum+=cv[i][j];
//            }
//        }
//    }
//    cout<<sum<<"\n";
//}

//#include "iostream"
//#include "vector"
//using namespace std;
//int main(){
//    vector<int>(A);
//    int r,x;
//    cin>>r;
//    for(int i=0;i<r;i++){
//        cin>>x;
//        A.push_back(x);
//    }
//    vector<int>n;
//    vector<int>p;
//    for(int i=0;i<r;i++){
//        if(A[i]>=0){
//            p.push_back(A[i]*A[i]);
//        }
//        else{
//            n.push_back(A[i]*A[i]);
//        }
//    }
//    reverse(n.begin(),n.end());
//    vector<int>c;
//    int f=0,s=0;
//    for(int i=0;i<r;i++){
//        if(p[f]<=n[s] || s>=n.size()){
//            c.push_back(p[f]);
//            f++;
//        }
//        else if (p[f] >= n[s] || f >= p.size()) {
//                c.push_back(n[s]);
//                s++;
//            }
//    }
//    for(int i=0;i<r;i++){
//        cout<<c[i]<<" ";
//    }
//}
//
//#include "iostream"
//#include "vector"
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int l=0,r=n-1,flag=0;
//    int ma=a[0];
//    int mi=a[n-1];
//    for(int i=1;i<n;i++){
//        l+=1;
//        r-=1;
//        mi=min(mi,a[r]);
//        ma=max(ma,a[l]);
//        cout<<mi<<" "<<ma<<" "<<i<<"\n";
//        cout<<r<<" "<<l<<"\n";
//        if(mi==ma){
//            flag=1;
//           cout<< mi<<"\n";
//           break;
//        }
//    }
//    if(flag==0){
//        cout<<"no"<<"\n";
//    }
//
//}


//#include "iostream"
//#include "vector"
//#include "set"
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int a[n],l[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    l[n-1]=a[n-1];
//    for(int i=n-2;i>=0;i--) {
//        l[i] = max(l[i + 1], a[i]);
//    }
//    int lm[n];
//    set<int>left;
//    lm[0]=a[0];
//    left.insert(a[0]);
//    for(int i = 1; i < n; ++i) {
//        left.insert(a[i]);
//        auto it = left.find(a[i]);
//
//        if (it != left.begin()) {
//            --it;
//            lm[i] = *it;
//        } else {
//            lm[i] = a[i];
//        }
//    }
//
//    int maxSum=INT_MIN;
//    int sum;
//    for(int i = 0; i < n; ++i) {
//        if(a[i] != l[i] && a[i] != lm[i]) {
//            sum = a[i] + l[i] + lm[i];
//            maxSum = max(maxSum, sum);
//        }
//    }
//    cout<<maxSum<<"\n";
//}

//#include<iostream>
//#include "vector"
//using namespace std;
//int main()
//{
//    int n ;
//    cin>>n;
//    vector <int> A;
//    for(int i =0; i<n; i++)
//    {
//        int t;
//        cin>>t;
//        A.push_back(t);
//    }
//    int i =0;
//    int count = 0;
//    int ans=0;
//
////    j==2;
//    while((A.size()-i)>=count) {
//        int j = A.size() - 1;
////        j==2;
//        while (j >= count && j >= i) {
//            if (A[j] >= A[i]) {
////                cout << i << " " << A[i] << " " << j << " " << A[j] << " " << count << "\n";
//                ans = j - i;
//                if (ans > count) {
////                    cout << count << " " << " " << ans << "\n";
//                    count = ans;
//                    break;
//                }
//            }
//            j--;
//        }
//        i++;
//    }
//    cout<<endl;
//    cout<<count;
//}

//#include "iostream"
//#include "math.h"
//
//using namespace std;
//int main(){
//    int n,m,r;
//    cin>>n>>m>>r;
//    pair<int,int>v[n];
//    pair<int,int>p[m];
//    for(int i=0;i<n;i++){
//        cin>>v[i].first>>v[i].second;
//    }
//    for(int i=0;i<m;i++){
//        cin>>p[i].first>>p[i].second;
//    }
//    sort(v,v+n);
//    sort(p,p+m);
//    int d=0,dis;
//    for(int j=0;j<r;j++){
//        dis=sqrt(pow((p[j].first-v[j].first),2)+pow((p[j].second-v[j].second),2));
//        d=max(d,dis);
//    }
//    cout<<pow(d,r)<<"\n";
//
//}


//#include "iostream"
//#include "vector"
//using namespace std;
//int main(){
//    string s,r;
//    cin>>s;
//    pair<int,char>(p[27]);
//    for(int i=1;i<=26;i++){
//        p[i].first=0;
//        p[i].second=char(int(96+i));
//    }
//    for(int i=1;i<=26;i++){
//        cout<<p[i].second<<"\n";
//    }
//    char k=s[0];
//    int x=0;
//    r=k;
//    for(int i=1;i<s.size();i++){
//        p[int(s[i])-96].first+=1;
//        if(k>1){
//            x++;
//
//        }
//        else {
//            r += k;
//        }
//    }
//}


// *********LINKED LIST********

//#include "iostream"
//using namespace std;
//struct node{
//    int data;
//    struct node *next;
//};
//int main(){
//    node *head;
//    node *one;
//    node *two;
//    node *three;
//
//    one = (struct node *)malloc(sizeof(struct node *));
//    two = (struct node *)malloc(sizeof(struct node *));
//    three = (struct node *)malloc(sizeof(struct node *));
//    one->data=1;
//    two->data=2;
//    three->data=3;
//
//    one->next=two;
//    two->next=three;
//    three->next=NULL;
//    head=one;
//    int cnt=0;
//    node* current;
//    current=head;
//    cout<<current<<"\n";
//    while(current!=NULL){
//        current=current->next;
//        cnt+=1;
//    }
//    cout<<cnt<<"\n";
//}

//**********


//Add node to the front
//#include "iostream"
//using namespace std;
//struct node{
//    int data;
//    node* next;
//};
//int main(){
//    int n;
//    cin>>n;
//    node* head;
//    node* x;
//    head= nullptr;
//    for(int i=0;i<n;i++){
////        x=(struct node *)(malloc(sizeof(struct node *)));
//        x=new node ;
//        cin>>x->data;
//        x->next= head;
//        head=x;
//    }
//    int cnt=0;
//    node *pointer;
//    pointer=head;
//    while(pointer!=NULL){
//        cout<<pointer->data<<" ";
//        pointer=pointer->next;
//        cnt+=1;
//    }
////    cout<<cnt<<"\n";
//}


//Add Node to the end

//#include "iostream"
//using namespace std;
//struct node{
//    int data;
//    node* next;
//};
//node* head;
//int main(){
//    head= nullptr;
//    int n;
//    cin>>n;
//    node* x;
//    node* temp;
//    node *p;
//    p=head;
//    for(int i=0;i<n;i++) {
//        x = new node;
//        cin >> x->data;
//        x->next = nullptr;
//        if (head == nullptr) {
//            head = x;
//            p=head;
//        }
//        temp=x;
//        if(p->next== nullptr){
//            p->next=temp;
//        }
//        p=p->next;
//    }
//
//    node *ptr;
//    ptr=head;
//    while(ptr!= nullptr){
//        cout<<ptr->data<<"\n";
//        ptr=ptr->next;
//    }
//}


//#include "iostream"
//using namespace std;
//struct node{
//    int data;
//    node* next;
//};
//node* head;
//int main(){
//    int n;
//    cin>>n;
//    node *x ;
//    node *temp;
//    node *p;
//    head= nullptr;
//    for(int i=0;i<n;i++){
//        x=new node;
//        cin>>x->data;
//        x->next= nullptr;
//        if(head->next== nullptr) {
//            head = x;
//        }
//
//    }
//}

//#include "iostream"
//#include "stack"
//#include "vector"
//using namespace std;
//int main(){
//    vector<int>v;
//    stack<int>s;
//    string x;
//    int n;
//    cin>>n;
//    int p,q;
//    for(int i=0;i<n;i++){
//        cin>>p;
//        if(p==1){
//            cin >> q;
//            if(!s.empty()) {
//                if (q > s.top()) {
//                    s.push(q);
//                } else {
//                    s.push(s.top());
//                }
//            }
//            else{
//                s.push(q);
//            }
//        }
//        if(p==2){
//            if(!s.empty()){
//                s.pop();
//            }
//        }
//        if(p==3){
//            v.push_back(s.top());
//        }
//    }
//    for(int i=0;i<v.size();i++){
//        cout<<v[i]<<"\n";
//    }
//}


//#include <iostream>
//#include "stack"
//using namespace std;
//string isBalanced(string s) {
//    stack<char> x;
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == '}' && !x.empty()) {
//            if (x.top() == '{') {
//                x.pop();
//            } else {
//                return "NO";
//            }
//        } else if (s[i] == ']' && !x.empty()) {
//            if (x.top() == '[') {
//                x.pop();
//            } else {
//                return "NO";
//            }
//        } else if (s[i] == ')' && !x.empty()) {
//            if (x.top() == '(') {
//                x.pop();
//            } else {
//                return "NO";
//            }
//        } else {
//            x.push(s[i]);
//        }
//    }
//    if (x.empty()) {
//        return "YES";
//    }
//    else{
//        return "NO";
//    }
//    return std::string();
//}
//
//int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++) {
//        string s;
//        cin >> s;
//        cout << isBalanced(s) << "\n";
//    }
//}


//#include "iostream"
//#include "stack"
//#include "string"
//#include "vector"
//using namespace std;
//int main(){
//    vector<string> A;
//    int sum=0;
//    for(int )
//    stack<string>s;
//    for(int i=0;i<A.size();i++){
//        if(A[i]=='+'){
//            int x=stoi(s.top());
//            s.pop();
//            int y=stoi(s.top());
//            s.pop();
//            s.push(to_string(x+y));
//        }
//        else if(A[i]=='/'){
//
//            int x=stoi(s.top());
//            s.pop();
//            int y=stoi(s.top());
//            s.pop();
//            s.push(to_string(x/y));
//        }
//        else if(A[i]=='*'){
//            int x=stoi(s.top());
//            s.pop();
//            int y=stoi(s.top());
//            s.pop();
//            s.push(to_string(x*y));
//        }
//        else if(A[i]=='-'){
//            int x=stoi(s.top());
//            s.pop();
//            int y=stoi(s.top());
//            s.pop();
//            s.push(to_string(x-y));
//        }
//        else{
//
//        }
//    }
//    cout<<s.top()<<"\n";
//}

//#include "iostream"
//#include "algorithm"
//#include "map"
//#include "vector"
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    vector<int>(A);
//    int p, ma = INT_MIN;
//    for (int i = 0; i < n; i++) {
//        cin >> p;
//        A.push_back(p);
//        ma = max(ma, A[i]);
//    }
//    int j=0;
//    for(int i=0;i<n;i++){
//        if(A[i]<=0){
//            swap(A[i],A[j]);
//            j++;
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<A[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=j;i<n;i++){
//        if(abs(A[i])+j-1>=0&&abs(A[i])+j-1<n){
//            if(A[abs(A[i])+j-1]>0)
//                A[abs(A[i])+j-1]=-A[abs(A[i])+j-1];
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<A[i]<<" ";
//    }
//    cout<<endl;
//    int flag=0;
//    for(int i=j;i<n;i++){
////        cout<<A[i]<<"\n";
//        if(A[i]>0)
//            flag=1;
//            cout<< (i-j+1)<<"\n";
//            break;
//    }
//    if(flag==0) {
//        cout<< (n - j + 1)<<"\n";
//    }
//}
//    int k;
//    for (int i = 0; i < n; i++) {
//        if(A[i]<n){
//            k=A[A[i]];
//            A[A[i]]=A[i];
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<A[i]<<" ";
//    }
//    cout<<endl;
//    for (int i = 1; i < n; i++) {
//        if (A[i] == -1) {
//            cout << i << "\n";
//            break;
//        }
//        else if(i==n-1 && A[i]==i){
//            cout<<i+1<<"\n";
//        }
//    }

//#include "iostream"
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int cnt=0,el=a[0];
//    for(int i=1;i<n;i++){
//        if(a[i]==el){
//
//        }
//    }
//    int el=a[0],cnt=2;
//    for(int i=2;i<n;i++){
////        if(cnt>n/3){
////            cout<<el<<"\n";
////            break;
////        }
//        if(a[i]==el){
//            cnt++;
//        }
//        else{
//            cnt--;
//            if(cnt==0){
//                el=a[i];
//                cnt=1;
//            }
//        }
//    }
//    cout<<el<<"\n";
//}

//#include "iostream"
//#include "map"
//using namespace std;
//int main(){
//    int n;
//    int mxv=INT_MIN,miv=INT_MAX;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//        miv=min(miv,a[i]);
//        mxv=max(mxv,a[i]);
//    }
//    map<int,int>m;
//    for(int i=0;i<n;i++){
//        m[a[i]]++;
//    }
//    int range=mxv+miv;
//    int l=0,r=m.size()-1;
//    for(auto x:m){
//        while(l<=r){
//            if(x.first+)
//        }
//    }
//}

//#include "iostream"
//#include "stack"
//using namespace std;
//int main() {
//    string x;
//    cin >> x;
//    stack<char>(s);
//    int cnt=0,flag=0;
//    bool op= false;
//    int l=0;
//    for(int i=0;i<x.size();i++){
//        op= false;
//        if(x[i]==')'){
//            flag=1;
//        }
//        else{
//            s.push(x[i]);
//        }
//        if(l==1){
//            break;
//        }
//        while(flag) {
//            if (s.top() =='+' || s.top()=='-'||s.top()=='*'||s.top()=='/') {
//                op= true;
//            }
//            if (s.top() == '(') {
//                s.pop();
//                flag = 0;
//            } else {
//                s.pop();
//            }
//            if(flag==0 && !op){
//                cout<<"Yes"<<"\n";
//                l=1;
//                break;
//            } else if(i==x.size()-1 && op){
//                cout<<"No"<<"\n";
//            }
//        }
//    }
//}
//#include "stack"
//#include "iostream"
//using namespace std;
//bool checkRedundancy(string& str) {
//    stack<char> st;
//    for (auto &ch : str) {
//        if (ch == ')') {
//            char top = st.top();
//            st.pop();
//            bool flag = true;
//            while (!st.empty() and top != '(') {
//                if (top == '+' || top == '-' ||
//                    top == '*' || top == '/') {
//                    flag = false;
//                }
//                top = st.top();
//                st.pop();
//            }
//            if (flag)
//                return true;
//        } else {
//            st.push(ch);
//        }
//    }
//    return false;
//}
//
//
//void findRedundant(string& str) {
//    bool ans = checkRedundancy(str);
//    if (ans)
//        cout << "Yes\n";
//    else
//        cout << "No\n";
//}

//#include "iostream"
//#include "vector"
//using namespace std;
//int main(){
//    int n,m;
//    cin>>n>>m;
//    vector<float>a,b,c;
//    for(int i=0;i<n;i++){
//        int x;
//        cin>>x;
//        a.push_back(x);
//    }
//    for(int i=0;i<m;i++){
//        int x;
//        cin>>x;
//        b.push_back(x);
//    }
//    int i=0,j=0;
//    for(int k=0;k<m+n;k++){
//        if(a[i]<b[j] || j>=m){
//            c.push_back(a[i]);
//            i++;
//        }else {
//            c.push_back(b[j]);
//            j++;
//        }
//    }
//    for(int k=0;k<n+m;k++){
//        cout<<c[k]<<" ";
//    }
//    int z=n+m;
//    cout<<endl;
//    cout<<c[z/2-1]+c[z/2];
//
//}

//#include "iostream"
//using namespace std;
//int main(){
//    int n,m,s;
//    cin>>n>>m>>s;
//    int a[n][m];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>a[i][j];
//        }
//    }
//    int i=0,j=m-1;
//    while(i>=0 &&i<n && j>=0 && j<m){
//        if(a[i][j]==s){
//            cout<<"1"<<"\n";
//            break;
//        }
//        if(a[i][j]>s){
//            j--;
//        }else{
//            i++;
//        }
//    }
//}
//
//#include "iostream"
//using namespace std;
//int Search(int a[],int v,int l,int r,int res){
//    while(l<=r){
//        int mid=(l+r)/2;
//        if(a[mid]==v){
//            return mid;
//        } else if(a[mid]>v){
//            r=mid-1;
//        }
//        else{
//            l=mid+1;
//        }
//    }
//    return l;
//}
//int main() {
//    int n, v;
//    cin >> n >> v;
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int res = -1;
//    int l = 0, r = n - 1;
//    cout << Search(a, v, l, r, res);
//}

//#include "iostream"
//#include "string"
//using namespace std;
//int main(){
//    string s;
//    getline(cin,s);
//    string x;
//    for(int i=0;i<s.size();i++){
//        int l=int(s[i]);
//        if((l>=65 && l<=90) || (l>=97 && l<=122) || (l>=48 && l<=57)) {
//            x += tolower(s[i]);
//        }
//    }
//    int c=x.size();
//    int p=c/2,flag=0;
//    for(int i=0;i<p;i++){
//        if(x[i]!=x[c-1-i]){
//            flag=1;
//            cout<<"No"<<"\n";
//        }
//        else{
//            continue;
//        }
//    }
//    if(flag!=1){
//        cout<<"Yes"<<"\n";
//    }
//
//}

//#include "iostream"
//#include "vector"
//using namespace std;
//int main(){
//    vector<int>(v);
//    int n,m;
//    cin>>n>>m;
//    int a[n],b[m];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int i=0;i<m;i++){
//        cin>>b[i];
//    }
//    int x=max(n,m);
//    int i=0,j=0;
//    while(i<n&&j<m){
//        if(a[i]==b[j]){
//            v.push_back(a[i]);
//            i++;j++;
//        }else if(a[i]>b[j]){
//            j++;
//        }else{
//            i++;
//        }
//    }
//    for(int k=0;k<v.size();k++){
//        cout<<v[k]<<" ";
//    }
//}


//#include "iostream"
//#include "vector"
//using namespace std;
//int main(){
//    vector<int>(v);
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        int x;
//        cin>>x;
//        v.push_back(x);
//    }
//    int i=0,cnt=0;
//    vector<int>::iterator it;
//    for( it=v.begin();it<v.end();it++){
//        cout<<v[*it]<<"\n";
//        cout<<v[*it+1]<<"\n";
//        if(v[*it]==v[*it+1]) {
//            v.erase(it);
//        }
//    }
//    for(auto x:v){
//        cout<<v[x]<<" ";
//    }
//}


//#include "iostream"
//#include "set"
//using namespace std;
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int x=n*m;
//    pair<int,pair<int,int>(`p[x]);
//    int a[n][m],k=0;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>a[i][j];
//            p[k].first=a[i][j];
//            p[k].second=i;
//            k++;
//        }
//    }
//    sort(p,p+x);
//    for(int i=0;i<x;i++){
//        cout<<p[i].first<<" "<<p[i].second<<"\n";
//    }
//
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    string s;
//    cin>>s;
//    int q;
//    cin>>q;
//    while(q--)
//    {
//        int t;
//        cin>>t;
//        if(t==1)
//        {
//            int a,b;
//            cin>>a>>b;
//            swap(s[a-1],s[b-1]);
//        }
//        else
//        {
//            int a,b;
//            cin>>a>>b;
//            s = s.substr(n,n).append(s.substr(0,n));
//        }
//
//    }
//    cout<<s;
//}

//#include "iostream"
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int c0=0,c2=0;
//    for(int i=0;i<n;i++){
//        if(a[i]==0){
//            c0++;
//        }
//        else if(a[i]==2){
//            c2++;
//        }
//    }
////    cout<<c0<<" "<<c2<<"\n";
//    int j=n-1;
//    for(int i=0;i<n;i++){
//        if(c0>0){
//            a[i]=0;
//            c0--;
//        }
//
//        else if(i<n-c2){
//            a[i]=1;
//        }
//        else{
//           a[i]=2;
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//    0 0 1 1 2 2

//   0 1 1 0 2 2

//}

//#include "iostream"
//#include "vector"
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    vector<string>(v);
//    string a;
//    for(int i=0;i<n;i++){
//        cin>>a;
//        v.push_back(a);
//    }
//    string x,res;
//    x=v[0];
//    for(int i=1;i<n;i++){
//        for(int j=0;j<v[i].size();j++){
//            if(x[j]==v[i][j]){
//            }
//            else{
//                int l=x.size();
//                x.erase(j,l);
//                break;
//            }
//        }
//    }
//    cout<<x<<"\n";
//}

//#include "iostream"
//using namespace std;
//struct node{
//    int data;
//    node* next;
//};
//int main(){
//    node * A;
//    node *temp=new node;
//    temp->data=2;
//    temp->next= nullptr;
//    A=temp;
//    temp=new node;
//    temp->data=3;
//    temp->next= nullptr;
//    node *temp1=A;
//    while (temp1->next!= nullptr){
//        temp1=temp1->next;
//    }
//    temp1->next=temp;
//}


//#include "iostream"
//using namespace std;
//struct node{
//    int data;
//    node*next;
//    node*prev;
//};
//node * A;
//struct node* GetNewNode(int val){
//    node* newnode=new node;
//    newnode->data=val;
//    newnode->next= nullptr;
//    newnode->prev= nullptr;
//    return newnode;
//}
//void InsertAtHead(int val){
//}
//int main(){
//
//}
//#include "iostream"
//#include "vector"
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    vector<int>(v);
//    int B=2;
//    for(int i=0;i<n;i++){
//        int p;
//        cin>>p;
//        v.push_back(p);
//    }
//    int p=0;
//    int i=0,j=B;
//    while(true){
//        if(j-i==1){
//            if(i==n){
//                break;
//            }
//            j+=B*2;
//            i=i+B+1;
//        }
//        else{
//            swap(v[i],v[B-i-1]);
//            i++;
//        }
//    }
//    for(int i=0;i<n;i++){
////        cout<<v[i]<<" ";
////    }
////}
//
//
//
//#include <vector>
//#include <iostream>
//#include "stack"
//using namespace std;
//int main() {
//    stack<int> f;
//    stack<int> s;
//    int t;
//    cin >> t;
//    int n, x;
//    while (t--) {
//        cin >> n;
//        if (n == 1) {
//            cin >> x;
//            f.push(x);
//        }
//        cout << f.size() << "\n";
//        cout << s.size() << "\n";
//        if (n == 2) {
//            while (!f.empty()) {
//                s.push(f.top());
//                f.pop();
//            }
//            cout << f.size() << "\n";
//            cout << s.size() << "\n";
//            s.pop();
//            while (!s.empty()) {
//                f.push(s.top());
//                s.pop();
//            }
//        }
//        if (n == 3) {
//            while (!f.empty()) {
//                s.push(f.top());
//                f.pop();
//            }
//            cout << s.top() << "\n";
//            while (!s.empty()) {
//                f.push(s.top());
//                s.pop();
//            }
//        }
//    }
//}
//
//#include<iostream>
//#include "cmath"
//#define mod  1000000007
//using namespace std;
//
//
//long long fib(long long x, long long y, long long n)
//{
//    long long dp[n+1];
//    for(long long i = 0; i<(n+1) ;i++)
//    {
//        if(i==0)
//        {
//            if(x<0){
//                dp[i]=mod- floor(abs(x)%mod);
//            }
//            dp[i]=x%mod;
//        }
//        else if(i==1)
//        {
//            dp[i]=y%mod;
//        }
//        else
//        {
//            dp[i]=(dp[i-1]%mod - dp[i-2]%mod)%mod;
//        }
//    }
//    for(long long  i = 0; i< n+1 ; i++)
//    {
//        cout<<dp[i]<<" ";
//    }
//    cout<<"\n";
//    return dp[n];
//}
//
//int main()
//{
//    long long x,y;
//    cin>>x>>y;
//    long long n ;
//    cin>>n;
//	cout<< mod-floor(-1 % mod);
////    cout<<fib(x,y,n);
//}


#include <iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int>v;
    map<int,int>m;
    int k;
    for(int i=0;i<4;i++){
        cin>>k;
        v.push_back(k);
    }
    for(auto x:v){
        m[x]++;
    }
    int n=m.size();
    cout<<n<<"\n";
    for(int i=n-1;i>=0;i--){
        
    }
}
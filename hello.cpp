# include <iostream>
# include <vector>

# define N 10


using namespace std;
vector<int> adj[N];

int main(){
    adj[0].push_back(1);
    adj[1].push_back(0);
    cout << "Hello SAD!";
}

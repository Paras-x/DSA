class StockSpanner {
public:
    stack<int> st;
    vector<int> price;
    vector<int> ans;

    int next(int p) {

        int i = price.size();

        price.push_back(p);
        ans.push_back(1);

        while (!st.empty() && price[st.top()] <= price[i]) {

            ans[i] += ans[st.top()];

            st.pop();
        }

        st.push(i);

        return ans[i];
    }
};
/* class StockSpanner {
public:
    stack<pair<int, int>> st;

    StockSpanner() {
    }

    int next(int price) {
        int span = 1;

        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});

        return span;
    }
}; */

/* class StockSpanner {
public:
    stack<int> st;
    vector<int> ans(n, 1);

    for(int i = n -1; i >= 0; i--){
        while(!ist.empty() && price[i] > price[st.top()]){
            ans[st.top()] = st.top() - i;
            st.pop();
        }

        st.push(i);

        while(!is.empty()){
            ans[st.top()] = st.top() + 1;
            st.pop();
        }

        return st;
    }

}; */


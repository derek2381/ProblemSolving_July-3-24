// problem linke
// https://leetcode.com/problems/design-browser-history/description/

class BrowserHistory {
public:
    vector<string> v;
    int index;
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        index = 0;
    }

    void visit(string url) {
        v.resize(index+1);
        v.push_back(url);
        index = v.size()-1;
    }

    string back(int steps) {
        index = max(0, index-steps);
        return v[index];
    }

    string forward(int steps) {
       index = min((int)v.size()-1, index+steps);

        return v[index];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

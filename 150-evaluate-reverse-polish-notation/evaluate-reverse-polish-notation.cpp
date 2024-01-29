class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s; int temp =0;
        for(int i=0;i<tokens.size();i++){
            temp =0;
            if(tokens[i] == "+"){
                temp = s.top();
                s.pop();
                temp = s.top() + temp;
                s.pop();
                s.push(temp);
            }else if(tokens[i] == "-"){
                temp = s.top();
                s.pop();
                temp = s.top() - temp;
                s.pop();
                s.push(temp);
            }
            else if(tokens[i] == "*"){
                temp = s.top();
                s.pop();
                temp = s.top() * temp;
                s.pop();
                s.push(temp);
            }else if(tokens[i] == "/"){
                temp = s.top();
                s.pop();
                temp = s.top() / temp;
                s.pop();
                s.push(temp);
            }
            else{
                s.push(stoi(tokens[i]));
            }

        }
        return s.top();
    }
};
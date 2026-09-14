class Solution {
public:
    class TrieNode{
        public:
        bool isEnd;
        TrieNode* children[26];
        string word;
        TrieNode(){
            isEnd=false;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
        }
    };
    void insert(string word){
        TrieNode* curr= root;
        for(char c:word){
            int i = c-'a';
            if(curr->children[i]==NULL){
                curr->children[i]= new TrieNode();
            }
            curr=curr->children[i];

        }
        curr->isEnd=true;
        curr->word =word;
    }
    vector<string>results;
    vector<vector<bool>>visited;
    TrieNode* root;
    int rows;
    int cols;
    int dr[4] = {-1,1,0,0};
    int dc[4] = {0,0,-1,1};
    void dfs(int row,int col, TrieNode* node, vector<vector<char>>&board){
        char c=board[row][col];
        int ind = c-'a';
        if(node->children[ind]==NULL) return;

        node=node->children[ind];
        if(node->isEnd){
            results.push_back(node->word);
            node->isEnd=false;
        }

        visited[row][col]=true;
        for(int i=0;i<4;i++){
            int newRow=dr[i]+row;
            int newCol=dc[i]+col;
            if(newRow < 0 || newRow >=rows|| newCol<0 || newCol>=cols){
                continue;
            }
            if(visited[newRow][newCol]){
                continue;
            }
            dfs(newRow, newCol,node,board);
        }
        visited[row][col]=false;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        rows = board.size();
        cols = board[0].size();
        root= new TrieNode();

        visited = vector<vector<bool>>(rows,vector<bool>(cols,false));
        for(string word:words){
            insert(word);
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                dfs(i,j,root,board);
            }
        }

        return results;
        
    }
};
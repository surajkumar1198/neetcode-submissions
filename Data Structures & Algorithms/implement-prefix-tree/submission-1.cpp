class PrefixTreeNode{
    public:
    bool isEnd;
    PrefixTreeNode* children[26];
    PrefixTreeNode(){
        isEnd=false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }

};
class PrefixTree {
public:
    PrefixTreeNode *root;
    PrefixTree() {
      root= new PrefixTreeNode();
    }
    
    void insert(string word) {
        PrefixTreeNode* curr = root;
        for(char c:word){
            int index=c-'a';
            if(curr->children[index]==NULL){
                curr->children[index] = new PrefixTreeNode();
            }
            curr=curr->children[index];
        }
        curr->isEnd=true;
        
    }
    
    bool search(string word) {
        PrefixTreeNode * curr = root;
        for(char c : word ){
            int index = c-'a';
            if(curr->children[index]==NULL){
                return false;
            }
            curr=curr->children[index];
        }
        return curr->isEnd;
        
    }
    
    bool startsWith(string prefix) {
        PrefixTreeNode* curr = root;
        for(char c : prefix ){
            int index = c-'a';
            if(curr->children[index]==NULL){
                return false;
            }
            curr=curr->children[index];
        }
        return true;
        
    }
};

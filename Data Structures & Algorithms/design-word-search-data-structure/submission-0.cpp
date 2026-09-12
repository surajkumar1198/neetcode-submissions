class TrieNode{
    public:
    TrieNode* children[26];
    bool isEnd;

    TrieNode(){
        isEnd=false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }
};
class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root= new TrieNode();
    }

    void addWord(string word) {
        TrieNode* curr = root;
        for(char c:word){
            int index=c-'a';
            if(curr->children[index]== NULL){
                curr->children[index] = new TrieNode();
            }
            curr=curr->children[index];
        }
        curr->isEnd=true; 
    }
    bool dfs(string word, int index, TrieNode *root){
        if(index==word.size()){
            return root->isEnd;
        }
        char c = word[index];
        if(c!='.'){
            int i = c-'a';
            if(root->children[i]==NULL){
                return false;
            }
            if(dfs(word,index+1,root->children[i])){
                return true;
            }
        }
        else{

        
        for(int i=0;i<26;i++){
            if(root->children[i]!=NULL){
                if(dfs(word,index+1,root->children[i])){
                    return true;
                }
            }
        }
        
        }
        return false;
    }
    
    bool search(string word) {
        return dfs(word,0,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
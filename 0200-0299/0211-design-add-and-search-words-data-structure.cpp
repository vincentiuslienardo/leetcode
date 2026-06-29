class WordDictionary {
private:
    struct Node {
        Node* children[26];
        bool isEnd;

        Node() {
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
            isEnd = false;
        }
    };

    Node* root;

public:
    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {
        Node* curr = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (curr->children[index] == nullptr) {
                curr->children[index] = new Node();
            }

            curr = curr->children[index];
        }

        curr->isEnd = true;
    }

    bool search(string word) {
        return dfs(word, 0, root);
    }

private:
    bool dfs(string& word, int index, Node* node) {
        if (node == nullptr) {
            return false;
        }

        if (index == word.size()) {
            return node->isEnd;
        }

        char ch = word[index];

        if (ch != '.') {
            int childIndex = ch - 'a';
            return dfs(word, index + 1, node->children[childIndex]);
        }

        for (int i = 0; i < 26; i++) {
            if (dfs(word, index + 1, node->children[i])) {
                return true;
            }
        }

        return false;
    }
};

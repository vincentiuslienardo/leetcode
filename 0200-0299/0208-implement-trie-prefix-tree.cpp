class Trie {
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
    Trie() {
        root = new Node();
    }

    void insert(string word) {
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
        Node* node = findNode(word);

        return node != nullptr && node->isEnd;
    }

    bool startsWith(string prefix) {
        Node* node = findNode(prefix);

        return node != nullptr;
    }

private:
    Node* findNode(string s) {
        Node* curr = root;

        for (char ch : s) {
            int index = ch - 'a';

            if (curr->children[index] == nullptr) {
                return nullptr;
            }

            curr = curr->children[index];
        }

        return curr;
    }
};

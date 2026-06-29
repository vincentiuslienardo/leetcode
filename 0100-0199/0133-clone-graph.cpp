class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) {
            return nullptr;
        }

        unordered_map<Node*, Node*> oldToNew;

        return dfs(node, oldToNew);
    }

private:
    Node* dfs(Node* node, unordered_map<Node*, Node*>& oldToNew) {
        if (oldToNew.count(node)) {
            return oldToNew[node];
        }

        Node* copy = new Node(node->val);
        oldToNew[node] = copy;

        for (Node* neighbor : node->neighbors) {
            copy->neighbors.push_back(dfs(neighbor, oldToNew));
        }

        return copy;
    }
};

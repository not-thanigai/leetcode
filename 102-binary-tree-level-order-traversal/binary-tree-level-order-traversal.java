/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> res = new ArrayList<>();
        int depth = 0;
        level(root,depth,res);
        return res;
    }

    public void level(TreeNode root,int depth,List<List<Integer>> res){
        if(root == null) return;
        if(res.size() == depth){
            List<Integer> list = new ArrayList<>();
            list.add(root.val);
            res.add(list);
        }
        else{
            res.get(depth).add(root.val);
        }

        level(root.left,depth+1,res);
        level(root.right,depth+1,res);
    }
}
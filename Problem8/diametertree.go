package main
import ("math")
type TreeNode struct {
	    Val int
	    Left *TreeNode
	    Right *TreeNode
 }
var max_diam float64 =0;
func find_diam(root *TreeNode) float64 {
    if root==nil{
        return float64(0);
    }
   
    var left_diam float64 = find_diam(root.Left);
    var right_diam float64 = find_diam(root.Right);
    max_diam = math.Max(max_diam,left_diam+right_diam);
    return 1+math.Max(left_diam,right_diam);
}
func diameterOfBinaryTree(root *TreeNode) int {
    max_diam=0;
    find_diam(root);
    return int(max_diam);
}
package problem9
import ("math")
type TreeNode struct {
	     Val int
	     Left *TreeNode
	     Right *TreeNode
 }
var max_sum=0.00
func maxPath (root *TreeNode)float64{
    if root==nil{
        return 0;
    }
    var left_sum float64=maxPath(root.Left);
    var right_sum float64=maxPath(root.Right);
    var val float64=float64(root.Val)+math.Max(left_sum,math.Max(right_sum,math.Max(0.00,left_sum+right_sum)))
    max_sum=math.Max(max_sum,val)
    return float64(root.Val)+math.Max(left_sum,math.Max(0,right_sum))
    
}
func maxPathSum(root *TreeNode) int {
    max_sum=(-1)*(math.Pow(10,8))
    maxPath(root)
    return int(max_sum)
}
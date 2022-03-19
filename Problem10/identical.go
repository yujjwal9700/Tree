
func isSameTree(p *TreeNode, q *TreeNode) bool {
    if(p==nil && q==nil){
        return true;
    }else if(p==nil || q==nil || p.Val!=q.Val){
        return false;
    }
    var check_left bool=isSameTree(p.Left,q.Left);
    var check_right bool=isSameTree(p.Right,q.Right);
    return check_left && check_right;
}
def is_same_tree(p, q)
    if(p==nil && q==nil)
          return true
    elsif(p==nil or q==nil or p.val!=q.val)
         return false
    end
    check_left=is_same_tree(p.left,q.left)
    check_right=is_same_tree(p.right,q.right)
    return check_left && check_right
end
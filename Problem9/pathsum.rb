def maxPath(root)
    if(root==nil)
         return 0
    end
    left_sum=maxPath(root.left)
    right_sum=maxPath(root.right)
    @max_val=[@max_val,root.val+[0,left_sum,right_sum,left_sum+right_sum].max()].max()
    return root.val+[0,left_sum,right_sum].max()
    end
def max_path_sum(root)
    @max_val=10**8*(-1)
    maxPath(root)
    return @max_val
end
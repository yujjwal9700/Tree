$traversal=[]
def left_boundary(root)
    if(root==nil or (root.left==nil and root.right==nil))
        return 
    end
    $traversal.append(root.val)
    if(root.left!=nil)
        left_boundary(root.left)
    else
        left_boundary(root.right)
    end
end
def leaf_boundary(root)
    if(root==nil)
         return 
    end 
    if(root.left==nil and root.right==nil)
        $traversal.append(root.val)
        return
    end
    leaf_boundary(root.left)
    leaf_boundary(root.right)
end
def right_boundary(root)
    if(root==nil or (root.left==nil and root.right==nil))
        return 
    end
    if(root.right!=nil)
        right_boundary(root.right)
    else
        right_boundary(root.left)
    end
    $traversal.append(root.val)
end
def boundary_of_binary_tree(root)
    if $traversal!=nil
        $traversal.clear
    end
    if root==nil
        return $traversal
    end
    $traversal.append(root.val)
    left_boundary(root.left)
    leaf_boundary(root.left)
    leaf_boundary(root.right)
    right_boundary(root.right)
    return $traversal
end
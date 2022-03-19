$max_diam=0
def find_diam(root)
    if(root==nil)
         return 0
    end
    left_diam=find_diam(root.left)
    right_diam=find_diam(root.right)
    $max_diam=[$max_diam,left_diam+right_diam].max
    return 1+[left_diam,right_diam].max
end        
def diameter_of_binary_tree(root)
    $max_diam=0
    find_diam(root)
    return $max_diam
    
end
package l16;
import java.util.Scanner;
import java.util.ArrayList;


import l15.QueueEmptyException;
import l15.QueueUsingLinkedList;

public class TreeUse {
    // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
    public static TreeNode<Integer> takeTreeInputLevelWise()
    {
        System.out.println("Enter root data");
        Scanner s = new Scanner(System.in);
        int rootData = s.nextInt();
        if (rootData == -1) {
            return null;
        }

        TreeNode<Integer> root = new TreeNode<>(rootData);
        QueueUsingLinkedList<TreeNode<Integer>> queue = new QueueUsingLinkedList<>();
        queue.enqueue(root);
        while (!queue.isEmpty()) {
            TreeNode<Integer> parent;
            try {
                parent = queue.dequeue();
            } catch (QueueEmptyException e) {
                return null;
            }
            System.out.println("Enter left child of " + parent.data);
            int leftData = s.nextInt();
            if (leftData != -1) {
                TreeNode<Integer> leftChild = new TreeNode<Integer>(leftData);
                queue.enqueue(leftChild);
                parent.left = leftChild;
            }

            System.out.println("Enter right child of " + parent.data);
            int rightData = s.nextInt();
            if (rightData != -1) {
                TreeNode<Integer> rightChild = new TreeNode<Integer>(rightData);
                queue.enqueue(rightChild);
                parent.right = rightChild;
            }
        }
        return root;
    }

    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    // public static TreeNode<Integer> takeTreeInput(Scanner s) {
    //     System.out.println("Enter root data");
    //     int rootData = s.nextInt();
    //     if (rootData == -1) {
    //         return null;
    //     }

    //     TreeNode<Integer> root = new TreeNode<>(rootData);
    //     root.left = takeTreeInput(s);
    //     root.right = takeTreeInput(s);
    //     return root;
    // }

    public static void print(TreeNode<Integer> root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + ":");
        if (root.left != null) {
            System.out.print(root.left.data + ",");
        }
        if (root.right != null) {
            System.out.print(root.right.data + ",");
        }
        System.out.println();

        print(root.left);
        print(root.right);
    }



    // public static int sum(TreeNode<Integer> root) {
    //     if (root == null) {
    //         return 0;
    //     }
    //     return sum(root.left) + sum(root.right) + root.data;
    // }

    // public static int numberNodes(TreeNode<Integer> root) {
    //     if (root == null) {
    //         return 0;
    //     }
    //     return numberNodes(root.left) + numberNodes(root.right) + 1;
    // }

    // public static boolean isElementPresent(TreeNode<Integer> root, int element){
    //    boolean isPresent=true;
    //    if (root==null){
    //        return false;
    //    }
    //    if (root.data == element){
    //        return true;
    //    }
    //    return  isElementPresent(root.left,element)||isElementPresent(root.right,element);

    // }
//	    public static void isElementPresent(TreeNode<Integer> root){
//	        if(root==null)
//	        {
//	        	return;
//	        }
//	        
//	
//	     }

    // public static int heightOfTree(TreeNode<Integer> root){
    //     if (root == null) {
    //         return 0;
    //     }
    //     int left=heightOfTree(root.left);
    //     int right=heightOfTree(root.right);
    //     if(left>right)
    //         return left+1;
    //     else
    //         return right+1;
    // }

    // public static int numberOfLeafNodes(TreeNode<Integer> root){
    //     if ( root.left==null || root.right==null)
    //         return 1;
    //  int  sum1= numberOfLeafNodes(root.left);
    //   int sum2=  numberOfLeafNodes(root.right);
    //      return sum1+sum2;

    // }

    // public static int max(TreeNode<Integer> root){
    //     if ( root==null)
    //         return 0;
    //     int left=max(root.left);
    //     int right=max(root.right);
    //     int max;
    //     if(left>right)
    //     {
    //         if(left>root.data)
    //         {
    //             max=left;
    //         }
    //         else
    //         {
    //             max=root.data;
    //         }
    //     }
    //     else
    //     {
    //         if(right>root.data)
    //         {
    //             max=right;
    //         }
    //         else
    //         {
    //             max=root.data;
    //         }
    //     }
    //     return max;
    // }

    // public static void printAtK(TreeNode<Integer> root, int k){
    //     if(k==0 || root ==null)
    //         return;
    //     if (k==1) {
    //         System.out.println(root.data + " ");
    //     }
    //     printAtK(root.left,k-1);
    //     printAtK(root.right,k-1);
    //  }
    // public static int leastCommonAncestor(TreeNode<Integer> root,int i,int j){

    //     if (root == null)
    //         return -1;
    //     if (root.data ==i ||root.data==j ){
    //         return root.data;
    //     }
        
    //     int k=leastCommonAncestor(root.left,i,j);
    //    int l=leastCommonAncestor(root.right,i,j);
    //     if(k!=-1&&l!=-1)
    //     {
    //         return root.data;
    //     }
    //      return (k!=-1)?k:l;
    // }
    // public static int leastCommonAncestorBinarySearch(TreeNode<Integer> root,int i,int j){

    //     if (root == null)
    //         return -1;
    //     if (root.data ==i ||root.data==j ){
    //         return root.data;
    //     }
        
    //     int k=leastCommonAncestorBinarySearch(root.left,i,j);
    //    int l=leastCommonAncestorBinarySearch(root.right,i,j);
    //     if(k!=-1&&l!=-1)
    //     {
    //         return root.data;
    //     }
    //      return (k!=-1)?k:l;
    // }

 //    public static int largestBSTSubtree(TreeNode<Integer> root) {
	// 	// Write your code here
	// 	tree1 output=largestBSTSubtree1(root);
	// 	System.out.println(output.bestbst.data);
	// return output.height;
	// }
	//  	public static tree1 largestBSTSubtree1(TreeNode<Integer> root) {
	// 	// Write your code here
	
	
	// 	if(root==null)
	// 	{
	// 	    tree1 output=new tree1(Integer.MAX_VALUE,Integer.MIN_VALUE,-1,null,true);
	// 	    return output;
	// 	}
	// tree1 out1=largestBSTSubtree1(root.left);
	// 	tree1 out2=largestBSTSubtree1(root.right);
	// 	//int min=Math.min(root.data,Math.min(out1.min,out2.min));
	// 	//int max=Math.max(root.data,Math.max(out1.max,out2.max));
	// 	int min=0;
	// 	int max=0;
	// 	min=Math.min(root.data,Math.min(out1.min,out2.min));
	// 	 max=Math.max(root.data,Math.max(out1.max,out2.max));
	// 	boolean isbst=out1.isbst&&out2.isbst&&root.data>out1.max&&root.data<=out2.min;
	// 	int height=0;
	// 	TreeNode<Integer> bestbst=null;
	// 	if(isbst==true)
	// 	{
			 
	// 	 height=Math.max(out1.height,out2.height)+1;
	// 		/*if(out1.height>out2.height)
				
	// 		{
	// 		   bestbst=out1.bestbst; 
	// 		}
	// 		else if(out1.height<out2.height)
	// 	{
	// 		  bestbst=out2.bestbst; 
	// 	}
	// 		else
	// 		{
	// 			bestbst=root;
	// 		}*/
	// 	 bestbst=root;
	// 	}
	// 		else if(out1.isbst==true&&out2.isbst!=true)
	// 		{
	// 			height=out1.height;
	// 			bestbst=out1.bestbst;
	// 		}
	// 		else
	// 		{
	// 			height=out2.height;
	// 			bestbst=out2.bestbst;
	// 		}
		
		
		
	
	// 	TreeNode<Integer> bestbst1=bestbst;
	// 	tree1 output=new tree1(min,max,height,bestbst1,isbst);
	// 	return output;
	//  	}

//	 	public static void nodesSumToS(TreeNode<Integer> root, int sum) {
//			// Write your code here
//
//	 		
//		}
//	 	public static int nodesSumToS1(TreeNode<Integer> root, int sum) {
//			// Write your code here
//	 		if(root==null)
// 		{
// 			return -1;
// 		}
// 		if(root.left==null&&root.right==null)
// 		{
// 			return root.data;
// 		}
// 		int k=nodesSumToS1(root.left, sum);
// 		if(root.data+k==sum)
// 		{
// 			System.out.println(root.data +" "+k);
// 		}
// 		int l=nodesSumToS1(root.right, sum);
//
// 		if(root.data+l==sum)
// 		{
// 			System.out.println(root.data +" "+l);
// 		}
// 		if(l+k==sum)
// 		{
// 			System.out.println(l +" "+k);
// 		}
// 		return root.data;
//	 	}
// public static int replace(TreeNode<Integer> root,int total)
// 	 	    {
// 	 		if(root==null)
// 	 		{
// 	 			return total;
// 	 		}
// 	 		if(root.left==null&&root.right==null)
// 	 		{
// 	 			if(total==0)
// 	 			{
// 	 				total=root.data;
// 	 				return total;
// 	 			}
// 	 			else
// 	 			{
// 	 				root.data=root.data+total;
// 	 				total=root.data;
// 	 				return total;
// 	 			}
// 	 		}
	 		
// 	 		root.data=root.data+replace(root.right, total);
// 	 		total=root.data;
// 	 		total=replace(root.left,total);
// 	 		return total;
// 	 	}
// 		public static void replaceWithLargerNodesSum(TreeNode<Integer> root) {
// 		replace(root,0);
			
// 		}
// 	 	public static ArrayList<Integer> nodesum(TreeNode<Integer> root, int sum,ArrayList<Integer> al)
// 	 	{
// 	 	    if(root==null)
// 	 	    {
// 	 	        return al;
// 	 	    }
// 	 	    if(root.left==null&&root.right==null)
// 	 	    {
	 	      
// 	 	         for(int i=0;i<al.size();i++)
// 	 	    {
// 	 	        if(root.data==al.get(i))
// 	 	        {
// 	 	            System.out.println(root.data + " "+ (sum-root.data));
// 	 	             return al;
// 	 	        }
	 	       
// 	 	    }
// 	 	  	 	        al.add(sum-root.data);
// 	 				return al;
	 	
// 	 	    }
// 	 	    int k=0;
// 	 	    al=nodesum(root.left,sum,al);
// 	 	al=nodesum(root.right,sum,al);
// 	 	    for(int i=0;i<al.size();i++)
// 	 	    {
// 	 	    	int m=root.data;
// 	 	    	int n=al.get(i);
// 	 	        if(m==n)
// 	 	        {
// 	 	        	if(root.data>(sum-root.data))
// 	 	        	{
// 	 	            System.out.println(root.data + " "+ (sum-(root.data)));
// 	 	        	}
// 	 	        	else
// 	 	        	{
// 	 	        		System.out.println(sum-(root.data)+" "+root.data);
// 	 	        	}
	
// 	 	            k=2;
	 	            
// 	 	        }
	 	    	
// 	 	    }
// 	 	 if(k==0)
// 	 	 {
// 	 	    al.add(sum-root.data);
// 	 	 }
// 	 	return al;
// 	 	}
// 	 		public static void nodesSumToS(TreeNode<Integer> root, int sum) {
// 	 			// Write your code here
// 	 	ArrayList<Integer> al = new ArrayList<>();
// 	 	al=nodesum(root,sum,al);
	 	
// 	 		}
	 	
// 	 		public static void nodesAtDistanceK(TreeNode<Integer> root, int node, int k) {
//           //nodesatdistancek(root,node,k);
// 	 	}
//    private static int nodesatdistancek(TreeNode<Integer> root, int node, int k) {
//		
//			if(root==null)
//			{
//				return -1;
//			}
//				if(root.data==node)
//				{
//					printatk(root,k);
//					return 0;
//				}
//				int left=nodesatdistancek(root.left,node,k);
//				if(left!=-1)
//				{
//					if(left+1==k)
//					{
//						printatk(root,k);
//
//					}
//					
//				}
//			}

	// private static void printatk(TreeNode<Integer> root, int k) {
	// 	// TODO Auto-generated method stub
		
	// }
	//   public static int iscousin(TreeNode<Integer> root, int p, int q)
	//  {
	//      if(root==null)
	//      {
	//          return 0;
	//      }
	//      if(root.data==p||root.data==q)
	//      {
	//          return 1;
	//      }
	//      int k=iscousin(root.left,p,q);
	//        int l=0;
	//      if(k!=0)
	//      {
	//          	         System.out.println("k"+k);
	//     return 1+k;
	//      }
	   
	//      else
	//      {
	//           l=iscousin(root.right,p,q);
	//      }
	//      if(l!=0)
	//      {
	//          	         System.out.println("l"+l);

	//          return 1+l;
	//      }
	//      else
	//      {
	//          return 0;
	//      }
	//  }
	//  public static boolean iscousin1(TreeNode<Integer> root, int p, int q)
	//  {
	//      int k=iscousin(root.left,p,q);
	//      int l=iscousin(root.right,p,q);
	//      if(k==l)
	//      {
	//          return true;
	//      }
	//      return false;
	//  }

	// public static boolean isCousin(TreeNode<Integer> root, int p, int q) {
	// 	// Write your code here
	// 	if(root==null)
	// 	{
	// 	    return false;
	// 	}
	// 	if(iscousin1(root,p,q))
	// 	{
	// 		return true;
	// 	}
 //    if(iscousin1(root.left,p,q))
 //    {
 //        return true;
 //    }
 //    if(iscousin1(root.right,p,q))
 //    {
   
 //        return true;
 //    }
 //    return false;
	// }
	void printfromleft(TreeNode<Integer> root,int level,bool printed[])
	{
		if(root!=null)
		{
           if(printed[level]==false)
           {
           	System.out.println(root.data);
           	printed[level]=true;
           }
           printfromleft(root.left,level+1,printed)
           printfromleft(root.right,level+1,printed);
		}

	}
	public static void main(String[] args) {

        TreeNode<Integer> root = takeTreeInputLevelWise();
        print(root);
        boolean printed=new boolean[5];
        printfromleft(root,0,printed);
        //isCousin(root, 2, 4);
        //nodesSumToS(root,5);
        //System.out.println(isElementPresent(root,3));
        //System.out.println(heightOfTree(root));
        //System.out.println(numberOfLeafNodes(root));
        //System.out.println(max(root));
         //printAtK( root,3);
        //replaceWithLargerNodesSum(root);
        //print(root);
       // System.out.println(largestBSTSubtree(root));
        // System.out.println(leastCommonAncestor(root,12,78));
    }

}


class tree1
{
    int min;
    int max;
    TreeNode<Integer> bestbst;
    int height;
    boolean isbst;
    public tree1(int min,int max,int height, TreeNode<Integer> bestbst,boolean isbst)
    {
    this.min=min;
    this.max=max;
    this.height=height;
    this.bestbst=bestbst;
    this.isbst=isbst;
    }
}
	
	

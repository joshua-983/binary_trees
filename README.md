To define a binary tree, the possibility that only one of the children may be empty must be acknowledged. An artifact, which in some textbooks is called an extended binary tree, is needed for that purpose. An extended binary tree is thus recursively defined as:[11]

the empty set is an extended binary tree
if T1 and T2 are extended binary trees, then denote by T1 • T2 the extended binary tree obtained by adding a root r connected to the left to T1 and to the right to T2[clarification needed where did the 'r' go in the 'T1 • T2' symbol] by adding edges when these sub-trees are non-empty.
Another way of imagining this construction (and understanding the terminology) is to consider instead of the empty set a different type of node—for instance square nodes if the regular ones are circles.[12]

Using graph theory concepts
A binary tree is a rooted tree that is also an ordered tree (a.k.a. plane tree) in which every node has at most two children. A rooted tree naturally imparts a notion of levels (distance from the root), thus for every node a notion of children may be defined as the nodes connected to it a level below. Ordering of these children (e.g., by drawing them on a plane) makes it possible to distinguish a left child from a right child.[13] But this still doesn't distinguish between a node with left but not a right child from a one with right but no left child.

The necessary distinction can be made by first partitioning the edges, i.e., defining the binary tree as triplet (V, E1, E2), where (V, E1 ∪ E2) is a rooted tree (equivalently arborescence) and E1 ∩ E2 is empty, and also requiring that for all j ∈ { 1, 2 } every node has at most one Ej child.[14] A more informal way of making the distinction is to say, quoting the Encyclopedia of Mathematics, that "every node has a left child, a right child, neither, or both" and to specify that these "are all different" binary trees.[7]

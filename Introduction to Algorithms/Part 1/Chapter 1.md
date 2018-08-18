# Chapter 1 #

## Part 1 ##

### 1.1-1 ###

Sorting: In schools, when students have to sit alphabetically, the list is sorted.

### 1.1-2 ###

Some other stuff can be:

* Memory usage.
* How easy to understand the algorithm is.
* Number of accesses to the memory.

### 1.1-3 ###

We chose a simple linked list.

**Advantages**:

* Exactly as much space as needed.
* Easy to add new elements in between existing ones.
* Easy to remove elements and keep the list in useable state.

**Disadvantages**:

* Have to go through the whole list to add something in the end.
* When searching, have to go through the list linearly.

### 1.1-4 ###

**Similarities:**

* They both are about traversing a graph.
* Finding a shortest path between nodes.

**Differences:**

* The starting node and the ending node have to be the same in TSP.
* The path has to go through all the nodes in TSP.

### 1.1-5 ###

**Optimal solution is necessary:**

Scheduling the classes at university. If two from the same year overlap, it is unacceptable, as the same people have to be at different places at the same time. Here an optimal solution is needed.

**Non optimal solution is ok:**

GPS - Going from one place to another. We can pick a path that is not optimal, but it's ok since we still will get to the destination.

## Part 2 ##

### 1.2-1 ###

One application that uses an algorithmic compnent in application level is a GPS system to figure the fastest way to a destination.

As we know from Artificial Intelligence classes, there is an algorithm like A* used, along with some heuristics to determine the best route.

### 1.2-2 ###

In this case, we need to figure out when *8n<sup>2</sup> &le; 64nlogn*.

By making the calculations, we have: *n &le; 8logn*.
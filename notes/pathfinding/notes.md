Notes source: http://theory.stanford.edu/~amitp/GameProgramming/AStarComparison.html


A* is like Greedy Best-First-Search in that it can use a heuristic to guide itself.In the simple case, it is as fast as Greedy Best-First-Search

![image](http://theory.stanford.edu/~amitp/game-programming/a-star/a-star.png?2017-11-17-16-51-46)

The secret to its success is that it combines the pieces of information that Dijkstra’s Algorithm uses (favoring vertices that are close to the starting point) and information that Greedy Best-First-Search uses (favoring vertices that are close to the goal). In the standard terminology used when talking about A*, g(n) represents the exact cost of the path from the starting point to any vertex n, and h(n) represents the heuristic estimated cost from vertex n to the goal. In the above diagrams, the yellow (h) represents vertices far from the goal and teal (g) represents vertices far from the starting point. A* balances the two as it moves from the starting point to the goal. Each time through the main loop, it examines the vertex n that has the lowest f(n) = g(n) + h(n).
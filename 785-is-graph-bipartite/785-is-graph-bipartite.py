class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        n = len(graph)
        colored = {}
        def color_connect(color, idx, graph, colored):
            if idx in colored:
                return color == colored[idx]
            colored[idx] = color                            
            return all(color_connect(-color, nb, graph, colored) for nb in graph[idx])
    
        return all(i in colored or color_connect(1, i, graph, colored) for i in range(n)) 
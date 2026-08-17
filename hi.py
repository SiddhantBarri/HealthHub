import sys

def solve():
    # Read all lines from standard input
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    results = []
    
    # Process each test case
    idx = 1
    for _ in range(t):
        a = int(input_data[idx])
        b = int(input_data[idx+1])
        c = int(input_data[idx+2])
        idx += 3
        
        tokens = [a, b, c]
        rounds = 0
        
        while True:
            # Sort to easily find the min (index 0) and max (index 2)
            tokens.sort()
            
            # If any two adjacent elements in the sorted array are equal, 
            # two players have the same number of tokens.
            if tokens[0] == tokens[1] or tokens[1] == tokens[2]:
                break
                
            # The player with the most gives 1 to the player with the least
            tokens[0] += 1
            tokens[2] -= 1
            rounds += 1
            
        results.append(str(rounds))
        
    # Print all results separated by a newline
    print('\n'.join(results))

if __name__ == '__main__':
    solve()

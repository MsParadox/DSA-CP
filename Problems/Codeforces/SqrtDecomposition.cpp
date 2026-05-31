#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    int Q;
    
    // Read the initial string and number of queries
    if (!(cin >> S >> Q)) return 0;
    
    int N = S.length();
    
    // Calculate Block Size
    int B = sqrt(N) + 1;
    int num_blocks = (N + B - 1) / B;
    
    // freq[block_index][character_index]
    vector<vector<int>> freq(num_blocks, vector<int>(26, 0));
    
    // Precomputation: Fill the initial frequencies
    for (int i = 0; i < N; i++) {
        int block_idx = i / B;
        int char_idx = S[i] - 'a';
        freq[block_idx][char_idx]++;
    }
    
    // Process Queries directly in a loop
    for (int q = 0; q < Q; q++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            // Type I: Update (1 i c)
            int i;
            char new_c;
            cin >> i >> new_c;
            
            i--; // Convert to 0-based index
            char old_c = S[i];
            
            if (old_c != new_c) {
                int block_idx = i / B;
                
                // Update block frequencies
                freq[block_idx][old_c - 'a']--;
                freq[block_idx][new_c - 'a']++;
                
                // Update the actual string
                S[i] = new_c;
            }
        } 
        else if (type == 2) {
            // Type II: Range Query (2 L R c)
            int L, R;
            char c;
            cin >> L >> R >> c;
            
            L--; // Convert to 0-based index
            R--; // Convert to 0-based index
            int target_c = c - 'a';
            
            int start_block = L / B;
            int end_block = R / B;
            int count = 0;
            
            if (start_block == end_block) {
                // Case 1: L and R are in the exact same block
                for (int i = L; i <= R; i++) {
                    if (S[i] - 'a' == target_c) {
                        count++;
                    }
                }
            } else {
                // Case 2: L and R span across multiple blocks
                
                // 1. Left partial block: L to the end of start_block
                int end_of_start_block = (start_block + 1) * B - 1;
                for (int i = L; i <= end_of_start_block; i++) {
                    if (S[i] - 'a' == target_c) {
                        count++;
                    }
                }
                
                // 2. Middle full blocks
                for (int b = start_block + 1; b < end_block; b++) {
                    count += freq[b][target_c];
                }
                
                // 3. Right partial block: start of end_block to R
                int start_of_end_block = end_block * B;
                for (int i = start_of_end_block; i <= R; i++) {
                    if (S[i] - 'a' == target_c) {
                        count++;
                    }
                }
            }
            cout << count << "\n";
        }
    }
    
    return 0;
}
static const bool __boost = [] () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return true;
}();

const size_t BUFFER_SIZE = 0x8000000; 
alignas (std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void* operator new (size_t size) {
    constexpr std::size_t alignment = alignof(std::max_align_t);

    if (buffer_pos % alignment != 0) {
        buffer_pos += alignment - (buffer_pos % alignment);
    }
    
    void* ptr = &buffer[buffer_pos];
    buffer_pos += size;
    return ptr;
}

void operator delete (void*, unsigned long) noexcept {}
void operator delete (void*) noexcept {}
void operator delete[] (void*) noexcept {}
void operator delete[] (void*, size_t) noexcept {}

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin() , nums.end());
        
    }
};
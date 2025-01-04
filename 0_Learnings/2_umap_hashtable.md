Although `unordered_map` uses a hash table internally, its space complexity differs from a traditional hash table.

- In a standard hash table, the space complexity is \( O(\text{highest element}) \), as it depends on the largest key value.
- In contrast, `unordered_map` has a space complexity of \( O(n) \), where \( n \) is the number of elements in the container.

This is because `unordered_map` dynamically manages storage and allocates memory based on the number of key-value pairs rather than the key values themselves.

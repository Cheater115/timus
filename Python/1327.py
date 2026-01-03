start = int(input())
end = int(input())

end += 1 + end % 2
result = (end - start) // 2
print(result)

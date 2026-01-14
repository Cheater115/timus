tm_qxx, tm_zzz = map(int, input().split())
attemts = sum(map(int, input().split()))

if tm_qxx <= tm_zzz - attemts * 20:
    print('No chance.')
else:
    print('Dirty debug :(')

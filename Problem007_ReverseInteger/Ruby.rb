# @param {Integer} x
# @return {Integer}
def reverse(x)
    if (x >= 0)
        return ((val = x.to_s.reverse.to_i) < 2147483647) ? val : 0
    else
        x = x.to_s
        x[0] = ""
        return ((val = x.reverse.to_i * -1) > -2147483648) ? val : 0
    end
end

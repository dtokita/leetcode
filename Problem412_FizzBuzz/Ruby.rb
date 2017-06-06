# @param {Integer} n
# @return {String[]}
def fizz_buzz(n)
    answer = Array.new
    
    n.times { |x| 
        if (x + 1) % 3 == 0 && (x + 1) % 5 == 0
            answer << "FizzBuzz"
        elsif (x + 1) % 3 == 0
            answer << "Fizz"
        elsif (x + 1) % 5 == 0
            answer << "Buzz"
        else
            answer << (x + 1).to_s
        end
    }
    
    return answer
end

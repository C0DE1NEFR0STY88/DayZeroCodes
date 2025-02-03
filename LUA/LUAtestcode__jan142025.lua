--LUA test code __ jan142025
print("abc123","test2")

io.write("this is ", _VERSION, "!\n\n")


local fruit = 10
local apples = 8
local other = fruit - apples

print(other)

orange = 123 --global variable


function calc(ch, a_rec, b_rec)
    if ch == 1 then
        return a_rec + b_rec
    elseif ch == 2 then
        if a > b then
            return a_rec - b_rec
        elseif a < b then
            return b_rec - a_rec
        else
            return a_rec - b_rec
        end
    else
        print("error")
    end
end


a = 10
b = 20
ch = 1
c = calc(ch, a, b)

print(calc(ch, a, b))

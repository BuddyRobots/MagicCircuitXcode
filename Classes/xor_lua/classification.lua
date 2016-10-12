require 'torch'
require 'nn'

torch.setdefaulttensortype('torch.DoubleTensor')
model = ""

function loadModel(path)

	model = torch.load(path)
    print ("Loaded Model -- Success")
	
end

----------------------------------------
-- input : float array[3*28*28]
-- output: int   class
function predictClass(arr)

	local image = torch.Tensor(arr)
	image:resize(3, 28, 28)
	print ("Loaded Array -- Success")

    print("=====================")
    print(model)
    print(image:size())
    print("=====================")

--[[test_data = torch.Tensor(3, 28, 28)
m = nn.Sequential()
m:add(nn.SpatialConvolution(3, 32, 5, 5, 1, 1, 2, 2))

test_out = m:forward(test_data)
print(test_out:size())]]

--[[
d = model:get(1):forward(image)
print("layer 1:")
print(d:size())

d = model:get(2):forward(d)
print("layer 2:")
print(d:size())

d = model:get(3):forward(d)
print("layer 3:")
print(d:size())

d = model:get(4):forward(d)
print("layer 4:")
print(d:size())

d = model:get(5):forward(d)
print("layer 5:")
print(d:size())

d = model:get(6):forward(d)
print("layer 6:")
print(d:size())

d = m:forward(d)
-- d = model:get(7):forward(d)
print("layer 7:")
print(d:size())

d = model:get(8):forward(d)
print("layer 8:")
print(d:size())

d = model:get(9):forward(d)
print("layer 9:")
print(d:size())
]]
--local pred = d
--	local pred = model:forward(image)


	-- pedict
	local pred = model:forward(image)
	print(pred:size())
	local m_t, m_i = torch.max(pred, 1)

    print("flag 1")

	--local m_t, m_i = torch.max(pred, 2)

    print(m_i:size())
    --print(m_i[1]:size())


    print(m_i)
    print("flag 2")



	return m_i[1]

end

----------------------------------------

function test()
	print("hello world!")
end



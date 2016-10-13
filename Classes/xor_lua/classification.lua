require 'torch'
--require 'nn'

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

print("flag 1")

	local image = torch.Tensor(arr)
	image:resize(3, 28, 28)

print(image)





	print ("Loaded Array -- Success")

	-- pedict
	local pred = model:forward(image)
	print(pred)
	local m_t, m_i = torch.max(pred, 1)

    print(m_i)
    print("flag 2")

	return m_i[1]

end

----------------------------------------

function test()
	print("hello world!")
end



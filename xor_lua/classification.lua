require 'torch'

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

	-- pedict
	local pred = model:forward(image)
	local m_t, m_i = torch.max(pred, 1)

    print("prediction : " .. m_i)

	return m_i[1]

end

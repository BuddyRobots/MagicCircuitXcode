require 'torch'
require 'nn'
require 'optim'

----------------------------------------
-- load test data for debug use
-- remove this part when release
function loadData()

	require 'data'
	load_test_data()

end

----------------------------------------
-- input : 
-- output: int class
function predict(imgPath, modelPath)

	local image = image.load(imgPath, 3, 'double')

	local model = torch.load(modelPath)

	-- pedict
	local pred = model:forward(img)
	local m_t, m_i = torch.max(pred, 1)

	return m_i[1]

end


----------------------------------------
--
--[[loadData()

testSize = table.getn(test_data)
errNum = 0

for i = 1, testSize do
	pred = predict(test_data[i][1])
	print("class: " .. test_data[i][2] .. " <-> " .. pred)

	if pred ~= test_data[i][2] then
		errNum = errNum + 1
	end
end

print("-ErrorNum: " .. errNum)
print("-TestSize: " .. testSize)
print("-Accuracy: " .. (testSize - errNum) / testSize)]]

function test()
	print("hello world!")
end



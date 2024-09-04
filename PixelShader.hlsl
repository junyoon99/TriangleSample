Texture2D shaderTexture;
SamplerState defaultSampler;


struct VOut
{
	float4 position : SV_Position;
	float4 tex : TEXCOORD0;
};

float4 main(VOut input) : SV_TARGET
{
	//float4 color = shaderTexture.Sample(defaultSampler, input.tex);

	float4 color;

	//float2 uv = input.tex;
	//uv = uv - float2(0.5f, 0.5f);

	//color = 1 - length(uv);
	//color *= 0.5;

	color = shaderTexture.Sample(defaultSampler, input.tex);

	//color.a = 1;

	//color[0] = color[1] = color[2] = (color.r + color.g + color.b) / 3;

	return color;
}
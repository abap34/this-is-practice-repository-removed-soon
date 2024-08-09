using PlotlyJS

z = rand(10, 10)

p = plot(
    surface(
        z=z, opacity=0.8, 
        contours_z=attr(
            show=true,
            usecolormap=true,
            project_z=true
        )
    )
)

open("plot_contours_z.html", "w") do f
    PlotlyBase.to_html(f, p.plot)
end